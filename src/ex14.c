#include "stdio.h"


int main(){

    char hello[] = "Hello";

    int len = sizeof(hello) / sizeof(char);
    char v2[len];

    for(int i = 0; i < len - 1; i++){
        v2[i] = hello[i] + 1;
        printf("%c - %d\n", hello[i], (int)hello[i]);
        printf("%c - %d\n", v2[i], (int)v2[i]);
    }


    return 0;
}