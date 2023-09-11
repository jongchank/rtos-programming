#include <stdio.h>

int show(const char *msg, int n);

int main(void)
{
    show("Hello\n", 5);
    return 0;
}

int show(const char *msg, int n)
{
    int i;

    for (i = 0; i < n; i++) {
        printf("%s", msg);
    }
    return 0;
}