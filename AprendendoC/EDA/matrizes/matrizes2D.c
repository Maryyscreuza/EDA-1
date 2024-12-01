#include <stdio.h>

int main(){
    int matriz[3][4] = {{0}};
    matriz[2][1] = 15;
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 4; j++) {
            printf("%d ", matriz[i][j]);
        }
    printf("\n"); // Nova linha para cada linha da matriz
    }
}

/*Leitura e Impressão*/

// 3 Notas para 80 alunos

int main() {
    float Notas[80][3], soma;
    printf("Digite as 3 notas dos 80 alunos:\n");
    for (int i = 0; i < 80; i++)
        for (int j = 0; j < 3; j++)
            scanf("%f", &Notas[i][j]);
    for (int i = 0; i < 80; i++) {
        soma = 0.0;
        for (int j = 0; j < 3; j++)
            soma += Notas[i][j];
        printf("Media %d: %.2f\n", i + 1, soma / 3.0);
    }
return 0;
}