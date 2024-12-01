
/*Procedimento que imprime "Hello, world" na tela/ Procedimentos em C são definidos com o tipo void e não retornam valor*/
/*O void pode ficar em arquivo separado e dar include no código que vai utilizar esse procedimento*/

#include <stdio.h>

void saudacao(){
    printf("Hello, world!\n");
}

int main(){
    saudacao(); //Chamada que imprime uma mensagem
    return 0;
}