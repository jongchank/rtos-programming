#include <stdio.h>
#include <string.h>
#include <assert.h>

enum {
    E_OK,           /* 0 */
    E_NULL_MSG,     /* 1 */
    E_ZERO_N,       /* 2 */
    E_MAX_LEN_MSG,  /* 3 */
    E_MAX_N         /* 4 */
};

#define MAX_LEN_MSG 30
#define MAX_N 10

int eno;

int show(const char *msg, int n);

int main(void)
{
    int ret;
    char *s = "Hello\n";
    int n = 5;

    if (strlen(s) > MAX_LEN_MSG) {
        fprintf(stderr, "String too long (%lu)\n", strlen(s));
    }
    if (n > MAX_N) {
        fprintf(stderr, "Above limit (%d)\n", n);
    }
    ret = show(s, n);
    if (ret < 0) {
        fprintf(stderr, "show() failed. ret = %d\n", eno);
    }
    return 0;
}

int show(const char *msg, int n)
{
    int i;

    assert(strlen(msg) != 0);
    assert(n != 0);

    eno = E_OK;
    if (msg == NULL) {
        eno = E_NULL_MSG;
        return -1;
    }
    if (n < 0) {
        eno = E_ZERO_N;
        return -1;
    }
    if (strlen(msg) > MAX_LEN_MSG) {
        eno = E_MAX_LEN_MSG;
        return -1;
    }
    if (n > MAX_N) {
        eno = E_MAX_N;
        return -1;
    }

    for (i = 0; i < n; i++) {
        printf("%s", msg);
    }
    return 0;
}