#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *args[]) {
    // Runtime error 1
    printf("%s", "Runtime error 1: Assign value to an index outside char[]'s bound\n");

    unsigned char *ptr = malloc(sizeof(int) * 5);

    *(ptr + 5) = 10;

    for (int i = 0; i < 6; i++) {
        printf("%d: %02X\n", i, ptr[i]);
    }

    // Runtime error 2
    printf("%s", "Runtime error 2: Print the value of a variable with no value\n");
    
    int x;

    printf("%d\n", x);

    // Runtime error 3
    printf("%s", "Runtime error 3: Access memory outside of char[]'s bound\n");

    char string[10];

    for (int i = 0; i < 20; i++) {
        printf("%d: %02X\n", i, string[i]);
    }

    return 0;
}