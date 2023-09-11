#include <stdio.h>

int show(const char *msg, int n);

int main(void)
{
    int ret;

    ret = show("Hello\n", 5);
    if (ret < 0) {
        fprintf(stderr, "show() failed. ret = %d\n", ret);
    }
    return 0;
}

int show(const char *msg, int n)
{
    int i;

    if (msg == NULL) {
        return -1;
    }
    if (n < 0) {
        return -2;
    }

    for (i = 0; i < n; i++) {
        printf("%s", msg);
    }
    return 0;
}