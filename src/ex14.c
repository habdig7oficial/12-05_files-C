#include "stdio.h"
#include "ctype.h"
#include "stdlib.h"
#include "stdbool.h"


void crypt(){
     int shift;
    scanf("%d", &shift);

    FILE *file_ptr = fopen("saida.txt", "r");
    fseek(file_ptr, 0, SEEK_END);
    int f_size = ftell(file_ptr);
    rewind(file_ptr);

    printf("\nAlocating %d bytes...\n", f_size);

    char *msg = malloc(f_size * sizeof(char));

    fread(msg, 1, f_size, file_ptr);

    char cipher[f_size];

    for(int i = 0; i < f_size - 1; i++){
        if(isalpha(msg[i]) == true){
            cipher[i] = msg[i] + shift;
        }
        else{
            cipher[i] = msg[i];
        }

        printf("%c - %d\n", msg[i], (int)msg[i]);
        printf("%c - %d\n", cipher[i], (int)cipher[i]);
    }

    FILE *save_cipher = fopen("chipher.txt", "w");

    fprintf(save_cipher, "%s", cipher);
    fclose(save_cipher);
    fclose(file_ptr);
}

int main(){

    crypt();
   

    return 0;
}