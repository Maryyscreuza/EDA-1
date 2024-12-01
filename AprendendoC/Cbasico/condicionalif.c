
/*Estruturas de controle - Condicional if*/

#include <stdio.h>

int main(){
    int numero;
    printf("Digite um numero: ");
    scanf("%d", &numero);

    if(numero > 0) {
        printf("o numero e positivo.\n");
    } else if (numero < 0) {
        printf("o numero e negativo.\n");
    } else {
        printf("o numero e zero.\n");
    }
    return 0;
} 
