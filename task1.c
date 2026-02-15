#include <stdio.h>
#include <stdlib.h>

int main (int arg, char *argv[]) {
    char myChar = 'a';
    short int myShortInt = 100;
    int myInt = 200;
    long int myLongInt = 300;
    float myFloat = 0.5;
    double myDouble = 1.5;
    unsigned char *ptr;

    printf("Char 'a':\n");
    ptr = (unsigned char *)&myChar;
    for (int i = 0; i < sizeof(char); i++) {
        printf("%d: %02X\n", i, ptr[i]);
    }
    
    printf("\n");

    printf("Short int 100:\n");
    ptr = (unsigned char *)&myShortInt;
    for (int i = 0; i < sizeof(short int); i++) {
        printf("%d: %02X\n", i, ptr[i]);
    }

    printf("\n");

    printf("Int 200:\n");
    ptr = (unsigned char *)&myInt;
    for (int i = 0; i < sizeof(int); i++) {
        printf("%d: %02X\n", i, ptr[i]);
    }

    printf("\n");

    printf("Long int 300:\n");
    ptr = (unsigned char *)&myLongInt;
    for (int i = 0; i < sizeof(long int); i++) {
        printf("%d: %02X\n", i, ptr[i]);
    }

    printf("\n");

    printf("Float 0.5:\n");
    ptr = (unsigned char *)&myFloat;
    for (int i = 0; i < sizeof(float); i++) {
        printf("%d: %02X\n", i, ptr[i]);
    }

    printf("\n");

    printf("Double 1.5:\n");
    ptr = (unsigned char *)&myFloat;
    for (int i = 0; i < sizeof(double); i++) {
        printf("%d: %02X\n", i, ptr[i]);
    }
    
    return 0;
}