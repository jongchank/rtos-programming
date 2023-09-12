#include <stdio.h>
#include <string.h>
#include <assert.h>
#include "show.h"

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
        fprintf(stderr, "show() failed. ret = %d\n", get_eno());
    }
    return 0;
}