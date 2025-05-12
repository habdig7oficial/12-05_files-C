#include "stdio.h"
#include "stdlib.h"
#include "string.h"

int main(int argc, char *argv[]){

    char name_copy[30];

    if(argv[1] == NULL)
        strcpy(name_copy, "[NULL_NAME].txt");
    else
        strcpy(name_copy, argv[1]);


    FILE *file_ptr = fopen("saida.txt", "r");

    fseek(file_ptr, 0, SEEK_END);
    
    int f_size = ftell(file_ptr);
    rewind(file_ptr);

    printf("\nAlocating %d bytes...\n", f_size);

    char *buffer = malloc(f_size * sizeof(char));

    FILE *copy_ptr = fopen(name_copy, "w");

    char *line = fgets(buffer, f_size, file_ptr);
    int lines = 0;
    while(line != NULL){
        printf("%s\n", buffer);
        fprintf(copy_ptr, "%s", buffer); // copy to another file
        line = fgets(buffer, f_size, file_ptr); // read each line of file
        lines++;
    }

    printf("This file has: %d lines\n", lines);

    fclose(file_ptr);
    fclose(copy_ptr);

    return 0;
}