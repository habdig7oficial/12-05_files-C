#include "stdio.h"
#include "stdlib.h"
#include "string.h"

int main(int argc, char *argv[]){

    FILE *file_ptr = fopen("numeros.txt", "r");

    fseek(file_ptr, 0, SEEK_END);
    
    int f_size = ftell(file_ptr);
    rewind(file_ptr);

    printf("\nAlocating %d bytes...\n", f_size);

    char *buffer = malloc(f_size * sizeof(char));

    char *line = fgets(buffer, f_size, file_ptr);

    int lines = 0;
    double acc = 0;
    while(line != NULL){
        printf("%s\n", buffer);
        acc += atoi(buffer);
        line = fgets(buffer, f_size, file_ptr); // read each line of file
        lines++;
    }

    printf("A média é %f", acc / lines);

    fclose(file_ptr);
    return 0;
}