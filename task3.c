#include <stdio.h>
#include <stdlib.h>

int main (int arg, char *argv[]) {
    unsigned char *ptr;

    for (int i = 0;; i++) {
        ptr = malloc(sizeof(int));
        printf("%d: %02X\n", i, ptr[0]);
        // free(ptr);
    }

    return 0;
}