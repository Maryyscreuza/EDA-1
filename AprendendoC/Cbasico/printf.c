
/* FUnção printf: */

#include <stdio.h>

int main(){
    int num = 5;
    float pi = 3.14159;
    char letra = 'A';
    printf("Inteiro: %d\n", num);
    printf("Ponto flutuante: %.2f\n", pi);  /*o .2 define quantas casas decimais quero que saia no terminal*/
    printf("Caractere: %c\n", letra);
    return 0;
}