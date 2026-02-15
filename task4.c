#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct alphabet {
    // Version 1: 10 bytes
    // char a[5];
    // short int b;
    // char c;

    // Version 2: 10 bytes
    // char a[5];
    // short int b;
    // char c;
    // char d;

    // Version 3: 8 bytes
    // char a[4];
    // short int b;
    // char c;
    // char d;

    // Version 4: 7 bytes
    char a[5];
    char b;
    char c;
    char d;
};

int main (int arg, char *argv[]) {
    struct alphabet *ptrStruct = (struct alphabet*) malloc(sizeof(struct alphabet));
    unsigned char *ptrByte = (unsigned char *)ptrStruct;

    strcpy(ptrStruct -> a, "aaaa");
    // strcpy(ptrStruct -> a, "aaa");
    ptrStruct -> b = 10;
    ptrStruct -> c = 'c';
    ptrStruct -> d = 'd';

    for (int i = 0; i < sizeof(struct alphabet); i++) {
        printf("%d: %02X\n", i, ptrByte[i]);
    }

    return 0;
}