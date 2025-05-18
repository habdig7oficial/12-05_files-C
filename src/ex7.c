#include "stdio.h"
#include "string.h"
#include "stdlib.h"

int main(int argc, char *argv[]){

    char name[30];

    if(argv[1] == NULL)
        strcpy(name, "numeros.txt");
    else
        strcpy(name, argv[1]);

    FILE *file_ptr = fopen(name, "w");

    char buffer[100];

    int len = sizeof(buffer) / sizeof(char);


    for(int i = 0; i < 10; i++){
        printf("Insira o %dº número: ", i + 1);
        fgets(buffer, len, stdin);
        fprintf(file_ptr, "%d\n", atoi(buffer));
    }

    fclose(file_ptr);

    return 0;
}