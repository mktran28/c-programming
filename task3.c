/**
 * This program is for C practice
 * 
 * Mai Khanh Tran
 * 02/14/2026
 */

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