#include "stdio.h"


int main(){

    FILE *file_ptr = fopen("saida.txt", "a");

    char buffer[100];

    int len = sizeof(buffer) / sizeof(char);

    printf("Write something to be appended on the file: ");
    fgets(buffer, len, stdin);

    fprintf(file_ptr, "\nThis will be appended to file:\n%s", buffer);


    fclose(file_ptr);

    return 0;
}