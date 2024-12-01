
/*F0R - Um laço de repetição simples que imprime valores de 0 a 4.*/ 

#include <stdio.h>

int main(){
    int i;
    for(i =0; i < 5; i++){
        printf("i = %d\n", i);
    }
    return 0;
}

/*WHILE - Um laço de repetição simples que imprime valores de 0 a 9.*/ 

int main(){
    int i = 0;
    while (i < 10){
        printf("i = %d\n, i");
        i++;
    }
    return 0;
}

/*DO WHILE - Um laço de repetição simples que imprime valores de 0 a 9 e a condição é verificada após a execução do bloco de código (executa pelo menos uma vez. como menu para usuário)*/

int main(){
    int i = 0;
    do{
        printf ("i = % d\n ", i);
        i++;
    } while (i < 10);
    return 0;   
}