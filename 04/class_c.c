#include <stdio.h>
#include <stdlib.h>

typedef struct _Number {
    int value;
    int (*add)(struct _Number *, int);
    int (*sub)(struct _Number *, int);
    int (*mul)(struct _Number *, int);
    int (*dur)(struct _Number *, int);
} Number;

int add(Number *a, int b)
{
    a->value += b;
    return a->value;
}

int sub(Number *a, int b)
{
    a->value -= b;
    return a->value;
}

int mul(Number *a, int b)
{
    a->value *= b;
    return a->value;
}

int dur(Number *a, int b)
{
    a->value /= b;
    return a->value;
}

void initNumber(Number *a, int value)
{
    a->value = value;
    a->add = add;
    a->sub = sub;
    a->mul = mul;
    a->dur = dur;
}

int main(void)
{
    Number _a;
    Number *a = &_a;

    initNumber(a, 3);
    printf("%d\n", a->add(a, 2));
    printf("%d\n", a->sub(a, 4));
    printf("%d\n", a->mul(a, 10));
    printf("%d\n", a->dur(a, 3));
    return 0;
}
