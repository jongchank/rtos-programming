#include <stdio.h>
#include <stdlib.h>

class Number
{
public:
    int value;

    int add(int);
    int sub(int);
    int mul(int);
    int dur(int);
};

int Number::add(int b)
{
    value += b;
    return value;
}

int Number::sub(int b)
{
    value -= b;
    return value;
}

int Number::mul(int b)
{
    value *= b;
    return value;
}

int Number::dur(int b)
{
    value /= b;
    return value;
}

#if 1
int main(void)
{
    Number a;
    a.value = 3;
    printf("%d\n", a.add(2));
    printf("%d\n", a.sub(4));
    printf("%d\n", a.mul(10));
    printf("%d\n", a.dur(3));
    return 0;
}
#endif

#ifdef __cplusplus
extern "C"
{
#endif

Number g_a;

int init(int value)
{
    g_a.value = value;    
    return g_a.value;
}

int _add(int b)
{
    return g_a.add(b);
}

int _sub(int b)
{
    return g_a.sub(b);
}

int _mul(int b)
{
    return g_a.mul(b);
}

int _dur(int b)
{
    return g_a.dur(b);
}

#ifdef __cplusplus
}   // extern "C"
#endif
