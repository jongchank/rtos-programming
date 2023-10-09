#include <stdio.h>
#include <stdarg.h>

int sum(int num_args, ...);

int main(void)
{
    int tot;
    tot = sum(5, 1, 2, 3, 4, 5);
    printf("total = %d\n", tot);
    tot = sum(6, 1, 2, 3, 4, 5, 10);
    printf("total = %d\n", tot);
    return 0;
}

int sum(int num_args, ...)
{
    int tot = 0;
    va_list ap;
    va_start(ap, num_args);
    for (int i = 0; i < num_args; i++) {
        tot += va_arg(ap, int);
    }
    va_end(ap);
    return tot;
}