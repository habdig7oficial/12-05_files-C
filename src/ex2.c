#include "stdio.h"
#include "stdlib.h"

int main(){

    FILE *file_ptr = fopen("saida.txt", "r");

    fseek(file_ptr, 0, SEEK_END);
    
    int f_size = ftell(file_ptr);
    rewind(file_ptr);

    printf("\nAlocating %d bytes...\n", f_size);

    char *buffer = malloc(f_size * sizeof(char));

    fgets(buffer, f_size, file_ptr);

    printf("%s\n", buffer);

    fclose(file_ptr);

    return 0;
}