#include "stdio.h"
#include "stdlib.h"

int main(int argc, char *argv[]){

    FILE *file_ptr = fopen("saida.txt", "r");

    fseek(file_ptr, 0, SEEK_END);
    
    int f_size = ftell(file_ptr);
    rewind(file_ptr);

    printf("\nAlocating %d bytes...\n", f_size);

    char *buffer = malloc(f_size * sizeof(char));

    char *teste = fgets(buffer, f_size, file_ptr);
    int lines = 0;
    while(teste != NULL){
        printf("%s\n", buffer);
        teste = fgets(buffer, f_size, file_ptr);
        lines++;
    }

    printf("This file has: %d lines\n", lines);

    fclose(file_ptr);

    return 0;
}