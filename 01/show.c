#include <stdio.h>
#include <string.h>
#include <assert.h>
#include "show.h"

int eno;

int show(const char *msg, int n)
{
    int i;

    assert(strlen(msg) != 0);
    assert(n != 0);

    eno = E_OK;
    if (msg == NULL) {
        eno = E_NULL_MSG;
        return -1;
    }
    if (n < 0) {
        eno = E_ZERO_N;
        return -1;
    }
    if (strlen(msg) > MAX_LEN_MSG) {
        eno = E_MAX_LEN_MSG;
        return -1;
    }
    if (n > MAX_N) {
        eno = E_MAX_N;
        return -1;
    }

    for (i = 0; i < n; i++) {
        printf("%s", msg);
    }
    return 0;
}