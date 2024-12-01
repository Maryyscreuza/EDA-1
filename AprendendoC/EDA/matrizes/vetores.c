#include <stdio.h>

/*Iteração*/
/*Para imprimir todos os elementos do vetor*/
int main(){
    int vetor[10];
    for(int i = 0; i < 10; i++) {
        printf("%d ", vetor[i]);
    }
} 

/* Para fazer Imprimir ao contrário é : for ( int i = 9; i ≥ 9; i--)*/

/*Busca no vetor*/

// Função para buscar um caractere no vetor
int Busca(char vet[], int tam, char target) {
    for (int i = 0; i < tam; i++) {
        if (vet[i] == target)
        return i;
    }
// Retorna -1 se o caractere não for encontrado
return -1;
}

int main() {
    char Letras[10] = \
    {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    char caracterParaBuscar;
    int posicao;
    printf("Digite um caractere para buscar no vetor: ");
    scanf(" %c", &caracterParaBuscar);
    posicao = Busca(Letras, 10, caracterParaBuscar);
    if (posicao != -1)
        printf("Encontrado na posição: %d\n", posicao);
    else
        printf("Não encontrado.\n");
    return 0;
    }