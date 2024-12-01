
/*SWITCH CASE: Economizar tempo para tomar decisoes com variavel int ou char*/

#include <stdio.h>

int main () {
    int escolha;
    printf(" Menu de Opcoes :\n " );
    printf(" 1. Opcao 1\n " );
    printf(" 2. Opcao 2\n " );
    printf("Escolha uma opcao: " );
    scanf("%d", &escolha);
    switch(escolha){
        case 1:
            printf("Voce escolheu 1.\n" ); break;
        case 2:
            printf("Voce escolheu 2.\n" ); break;
        default: /*se não executar o caso 1 ou 2*/
            printf("Opcao invalida!\n" );
        }
    return 0;
}