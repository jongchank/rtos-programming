#include <stdio.h>
#include <stdlib.h>
#include <arithmetic.h>

int main(void)
{
    int (*p)(int, int); /* function pointer p */

    p = add;
    printf("3 + 2 = %d\n", p(3, 2));
    printf("3 + 2 = %d\n", (*p)(3, 2));

    p = sub;
    printf("3 - 2 = %d\n", p(3, 2));
    printf("3 - 2 = %d\n", (*p)(3, 2));

    return 0;
}
