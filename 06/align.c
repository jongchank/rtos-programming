#include <stdio.h>
#include <stdint.h>

struct test {
    int8_t  a;  /* 1 */
    int16_t b;  /* 2 */
    int16_t c;  /* 2 */
    int32_t d;  /* 4 */
    int64_t e;  /* 8 */
    int8_t  f;  /* 1 */
}
#if 0
__attribute__((packed))
#endif
;

int main(void)
{
    struct test t;
    printf("%zu\n", sizeof(struct test));
    printf("%zu %zu\n", ((uint8_t*)&(t.b)) - ((uint8_t*)&(t.a)), sizeof(t.a));
    printf("%zu %zu\n", ((uint8_t*)&(t.c)) - ((uint8_t*)&(t.b)), sizeof(t.b));
    printf("%zu %zu\n", ((uint8_t*)&(t.d)) - ((uint8_t*)&(t.c)), sizeof(t.c));
    printf("%zu %zu\n", ((uint8_t*)&(t.e)) - ((uint8_t*)&(t.d)), sizeof(t.d));
    printf("%zu %zu\n", ((uint8_t*)&(t.f)) - ((uint8_t*)&(t.e)), sizeof(t.e));
    printf("%zu %zu\n", ((uint8_t*)&(t.a)) + sizeof(struct test) - ((uint8_t*)&(t.f)), sizeof(t.f));
    return 0;
}