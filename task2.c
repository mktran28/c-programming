#include <stdio.h>
#include <stdlib.h>

int main (int arg, char *argv[]) {
    char myChar = 'a';
    short int myShortInt = 100;
    int myInt = 200;
    long int myLongInt = 300;
    float myFloat = 0.5;
    double myDouble = 1.5;
    unsigned char *ptr = (unsigned char *)&ptr;

    // Pointer (0-7), double (8-15), long int (24-31), int (32-35), short int (36-37), char (39)
    for (int i = 0; i < 100; i++) {
        printf("%d: %02X\n", i, ptr[i]);
    }

    return 0;
}