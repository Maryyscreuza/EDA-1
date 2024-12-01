#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tiposestoque.h"

/*Requisitos da função alocaEstoque:
R1. Ler do usuário a quantidade máxima de produtos (QMP) no estoque.  
R2. Configurar a estrutura de dados do estoque (Estoque) adequadamente. Veja que o parâmetro pEstoque é um parâmetro por referência. */

/*Requisitos da função incluirProdutos:
R1. Ler do usuário os detalhes (Código, Quantidade e Preço) de todos os produtos conforme o tamanho do vetor de produtos. Veja que o parâmetro pEstoque é um parâmetro por referência. */

/*Requisitos da função listarProdutos:
R1. Mostrar na tela a os detalhes (Código, Quantidade e Preço) de todos os produtos conforme o tamanho do vetor de produtos.
R2. Utilize o seguinte formato de saída de dados: printf("ID: %d, Qt:%d, Preço: %.2f\n", pID, pQ, pP), onde pID, pQ e pP são o código, a quantidade e o preço de um produto.  */

/*Requisitos da função desalocaEstoque:
R1. Desalocar a memória que foi alocada dinamicamente.
R2. Reconfigurar adequadamente os campos da variável Estoque. Veja que o parâmetro pEstoque é um parâmetro por referência. */

void alocaEstoque(TEstoque *pEstoque){
    if (pEstoque == NULL) {
        return; // Não faz nada se o ponteiro for nulo
    }

    //R1. Ler do usuário a quantidade máxima de produtos (QMP) no estoque. 
    scanf("%d", &pEstoque->qtdeProdutos);

    // Verifica se a quantidade máxima é válida
    if (pEstoque->qtdeProdutos <= 0) {
        pEstoque->qtdeProdutos = 0;
        pEstoque->produtos = NULL;
        return;
    }

    //R2. Configurar a estrutura de dados do estoque (Estoque) adequadamente.
    pEstoque->produtos = (TProduto*)malloc(pEstoque->qtdeProdutos*sizeof(TProduto));
    if (pEstoque->produtos == NULL) {
        pEstoque->qtdeProdutos = 0; // Define quantidade como 0 em caso de falha
    }
}

void incluirProdutos(TEstoque *pEstoque) {
    // Para verificar se o ponteiro é válido e se tem produtos no estoque:
    if (pEstoque == NULL || pEstoque->produtos == NULL || pEstoque->qtdeProdutos <= 0) {
        return; // Não faz nada se os parâmetros forem inválidos
    }

    // R1. Ler do usuário os detalhes (Código, Quantidade e Preço) de todos os produtos conforme o tamanho do vetor de produtos.
    for (int i = 0; i < pEstoque->qtdeProdutos; i++) {
        scanf("%d", &pEstoque->produtos[i].id);         // Código do produto
        scanf("%d", &pEstoque->produtos[i].quantidade); // Quantidade no estoque
        scanf("%f", &pEstoque->produtos[i].preco);      // Preço unitário
    }
}

void listarProdutos(TEstoque *pEstoque) {
    // Verifica se o ponteiro é válido e se há produtos no estoque
    if (pEstoque == NULL || pEstoque->produtos == NULL || pEstoque->qtdeProdutos <= 0) {
        return; // Não faz nada se os parâmetros forem inválidos
    }

    // R1. Mostrar na tela a os detalhes (Código, Quantidade e Preço) de todos os produtos conforme o tamanho do vetor de produtos.
    for (int i = 0; i < pEstoque->qtdeProdutos; i++) {
        int pID = pEstoque->produtos[i].id;
        int pQ = pEstoque->produtos[i].quantidade;
        float pP = pEstoque->produtos[i].preco;

    // R2. Utilize o seguinte formato de saída de dados: printf("ID: %d, Qt:%d, Preço: %.2f\n", pID, pQ, pP), onde pID, pQ e pP são o código, a quantidade e o preço de um produto.
        printf("ID: %d, Qt:%d, Preço: %.2f\n", pID, pQ, pP);
    }
}

void desalocaEstoque(TEstoque *pEstoque) {
    // Verifica se o ponteiro e a memória alocada estão válidos
    if (pEstoque == NULL || pEstoque->produtos == NULL) {
        return; // Não faz nada se os parâmetros forem inválidos
    }

    // R1. Desalocar a memória que foi alocada dinamicamente.
    free(pEstoque->produtos);

    // R2. Reconfigurar adequadamente os campos da variável Estoque. Veja que o parâmetro pEstoque é um parâmetro por referência. 
    pEstoque->produtos = NULL;   // Define o ponteiro como NULL após a desalocação
    pEstoque->qtdeProdutos = 0;  // Zera a quantidade de produtos
}

int main() {
TEstoque Estoque;
alocaEstoque(&Estoque);
incluirProdutos(&Estoque); 
listarProdutos(&Estoque);
desalocaEstoque(&Estoque);

return 0;
}