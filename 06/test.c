#include <stdio.h>

int main(void)
{
    int a, b, c;
    printf("*\n");
    a = -1;
    printf("*\n");
    b = 1;
    printf("*\n");
    c = -1;
    printf("*\n");
    a = b + c;
    printf("*\n");
    b = a + c;
    printf("*\n");
    c = a + b + 1;
    printf("*\n");
    a = b / c;
    printf("*\n");
    b = a * c;
    printf("a b c = %d %d %d\n", a, b, c);

    return 0;
}
