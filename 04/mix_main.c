#include <stdio.h>
#include <stdlib.h>

extern int init(int value);
extern int _add(int b);
extern int _sub(int b);
extern int _mul(int b);
extern int _dur(int b);

int main(void)
{
    init(3);
    printf("%d\n", _add(2));
    printf("%d\n", _sub(4));
    printf("%d\n", _mul(10));
    printf("%d\n", _dur(3));
    return 0;
}
