#include <stdio.h>

int main(void) {
#ifdef __STDC_NO_THREADS__
    printf("NO THREADS!\n");
#else
    printf("THREADS!\n");
#endif
    return 0;
}
