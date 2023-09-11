#ifndef __SHOW_H__
#define __SHOW_H__

enum {
    E_OK,           /* 0 */
    E_NULL_MSG,     /* 1 */
    E_ZERO_N,       /* 2 */
    E_MAX_LEN_MSG,  /* 3 */
    E_MAX_N         /* 4 */
};

#define MAX_LEN_MSG 30
#define MAX_N 10

extern int eno;

int show(const char *msg, int n);

#endif  /* __SHOW_H__ */