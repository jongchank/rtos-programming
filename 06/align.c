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

#define REAL(a, b) (((uint8_t*)&(b)) - ((uint8_t*)&(a)))
#define REALL(a, t) (((uint8_t*)&(t)) + sizeof(t) - ((uint8_t*)&(a)))

#define PADDING(a, b) (((uint8_t*)&(b)) - ((uint8_t*)&(a)) - sizeof(a))
#define PADDINGL(a, t) (((uint8_t*)&(t)) + sizeof(t) - ((uint8_t*)&(a)) - sizeof(a))

int main(void)
{
    struct test t;
    printf("Structure size = %zu\n", sizeof(struct test));
    printf("SIZ PAD RAL\n");
    printf("%2zu + %zu = %zu\n", sizeof(t.a), PADDING(t.a, t.b), REAL(t.a, t.b));
    printf("%2zu + %zu = %zu\n", sizeof(t.b), PADDING(t.b, t.c), REAL(t.b, t.c));
    printf("%2zu + %zu = %zu\n", sizeof(t.c), PADDING(t.c, t.d), REAL(t.c, t.d));
    printf("%2zu + %zu = %zu\n", sizeof(t.d), PADDING(t.d, t.e), REAL(t.d, t.e));
    printf("%2zu + %zu = %zu\n", sizeof(t.e), PADDING(t.e, t.f), REAL(t.e, t.f));
    printf("%2zu + %zu = %zu\n", sizeof(t.f), PADDINGL(t.f, t), REALL(t.f, t));
    return 0;
}