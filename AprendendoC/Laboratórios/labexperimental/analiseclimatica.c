#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tipos.h"

// Função para calcular estatísticas
void estatisticas(TTemperaturas *registro) {
    if (registro->qtde_medidas == 0) {
        printf("Nenhuma medida registrada.\n");
        return;
    }

    float soma = 0, menor = registro->medidas[0].temperatura[0], maior = menor;
    char cidade_menor[20], cidade_maior[20];

    for (int i = 0; i < registro->qtde_medidas; i++) {
        soma += registro->medidas[i].temperatura[0];

        if (registro->medidas[i].temperatura[0] < menor) {
            menor = registro->medidas[i].temperatura[0];
            strcpy(cidade_menor, registro->medidas[i].cidade);
        }
        if (registro->medidas[i].temperatura[0] > maior) {
            maior = registro->medidas[i].temperatura[0];
            strcpy(cidade_maior, registro->medidas[i].cidade);
        }
    }

    printf("\nEstatísticas:\n");
    printf("Temperatura média: %.2f\n", soma / registro->qtde_medidas);
    printf("Menor temperatura: %.2f (Cidade: %s)\n", menor, cidade_menor);
    printf("Maior temperatura: %.2f (Cidade: %s)\n", maior, cidade_maior);
}

int main() {
    TTemperaturas registro;
    registro.qtde_dias = 0;
    registro.qtde_medidas = 0;
    registro.medidas = NULL;

    char opcao;

    do {
        printf("\nMenu:\n");
        printf("(a) Reset\n");
        printf("(b) Inserir Medida\n");
        printf("(c) Estatística\n");
        printf("(d) Sair\n");
        printf("Escolha uma opção: ");
        scanf(" %c", &opcao);

        switch (opcao) {
        case 'a': // Reset
            printf("Digite a quantidade de dias para o registro de temperaturas: ");
            scanf("%d", &registro.qtde_dias);

            // Libera memória antiga, se houver
            if (registro.medidas != NULL) {
                for (int i = 0; i < registro.qtde_medidas; i++) {
                    free(registro.medidas[i].temperatura);
                }
                free(registro.medidas);
            }

            // Aloca o vetor de medidas
            registro.medidas = malloc(registro.qtde_dias * sizeof(TMedidas));
            registro.qtde_medidas = 0;

            printf("Sistema resetado. Pode registrar até %d medidas.\n", registro.qtde_dias);
            break;

        case 'b': // Inserir Medida
            if (registro.qtde_medidas >= registro.qtde_dias) {
                printf("Não é possível adicionar mais medidas. Limite atingido.\n");
                break;
            }

            TMedidas nova_medida;
            printf("Digite o nome da cidade: ");
            scanf("%s", nova_medida.cidade);

            nova_medida.temperatura = malloc(sizeof(float));
            printf("Digite a temperatura registrada: ");
            scanf("%f", nova_medida.temperatura);

            registro.medidas[registro.qtde_medidas] = nova_medida;
            registro.qtde_medidas++;

            printf("Medida adicionada com sucesso.\n");
            break;

        case 'c': // Estatística
            estatisticas(&registro);
            break;

        case 'd': // Sair
            printf("Encerrando o programa...\n");
            for (int i = 0; i < registro.qtde_medidas; i++) {
                free(registro.medidas[i].temperatura);
            }
            free(registro.medidas);
            break;

        default:
            printf("Opção inválida! Tente novamente.\n");
        }

    } while (opcao != 'd');

    return 0;
}
