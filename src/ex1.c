#include "stdio.h"


int main(){

    FILE *file_ptr = fopen("saida.txt", "w");

    char buffer[100];

    int len = sizeof(buffer) / sizeof(char);

    fgets(buffer, len, stdin);


    fprintf(file_ptr, "%s\n\n\nFILE_END", buffer);


    fclose(file_ptr);

    return 0;
}