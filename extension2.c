#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *args[]) {
    // Any numbers larger than 2^24 (so being multiplied by 2^-23 won't make a different)
    float x = 99999999999999998.0;
    float y = 99999999999999999.0;

    unsigned char *xptr = (unsigned char *)&x;
    unsigned char *yptr = (unsigned char *)&y;

    for (int i = 0; i < sizeof(float); i++) {
        printf("%d: %02X, %02X\n", i, xptr[i], yptr[i]);
    }

    return 0;
}