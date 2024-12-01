
/*Usando as estruturas condicionais e de repetição (implemente um menu), crie um programa de calculadora que lê operações e
valores do usuário e mostre o resultado na tela.*/

#include <stdio.h>

int main(){
    int numero1;
    int numero2;

    printf("Digite um numero: ");
    scanf("%d", &numero1);
    
    printf("Digite outro numero: ");
    scanf("%d", &numero2);

    /*int soma(numero1, numero2){
        return numero1 + numero2;
    }

    int subtracao(numero1, numero2){
        return numero1 - numero2;
    }

    int multiplicacao(numero1, numero2){
        return numero1 * numero2;
    }

    int divisao(numero1, numero2){
        return numero1 / numero2;
    }*/
        char opcao;
        printf("Escolha o operador (+, -, * ou /): ");
        scanf("%c", &opcao);
        switch (opcao) {
            case 'soma':
                printf("Resultado: %d\n", numero1 + numero2); break;
            /*case 2:
                printf("Você escolheu a opção 2.\n"); break;
            case 3:
                printf("Você escolheu a opção 3.\n"); break;
            default:
                printf("Opção inválida.\n"); break;*/
    }
    return 0;
}