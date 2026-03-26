#include <stdio.h>

int main(){

    char letra;
    printf("Entre com um aletra minuscula:\n");
    scanf("%c", &letra);
    letra = letra + ( 'A' - 'a');
    printf("Caractere = %c \n", letra);
    return 0;

}