
/*Função scanf, idade e altura*/

#include <stdio.h>

int main() {
    int idade;
    float altura;
    printf("Digite sua idade: "); /*Printf mostra a mensagem na tela*/
    scanf("%d", &idade); /*Scanf cria uma interrupção de teclado, para o usuário digitar, espera uma entrada de dados para formatar pro tipo inteiro*/
    printf("Digite sua altura: ");
    scanf("%f", &altura);
    printf("Idade: %d, Altura: %.2f\n", idade, altura);
    return 0;
}