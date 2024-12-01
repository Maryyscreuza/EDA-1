#include <stdio.h>

//O printf vai rodar 24 vezes, pois 2x3x4

int main(){
    int matriz[2][3][4] = {{{0}}};
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++) {
            for(int k = 0; k < 4; k++) {
                printf("%d ", matriz[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
}