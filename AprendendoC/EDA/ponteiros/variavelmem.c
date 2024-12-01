#include <stdio.h>

/* int main() {
int numero;
numero = 79417;
//Valor de 'numero'
printf("Valor: %d\n", numero);
//Endereço de 'numero'
printf("Endereço: %p\n", &numero);
return 0;
}

//Atribuição de ponteiro

int main() {
int numero, *ptr;
numero = 79417;
ptr = &numero;
return 0;
}
*/

//setando valor ao ponteiro

int main() {
int numero, *ptr;
numero = 79417;
ptr = &numero; //obrigatorio para saber onde aponta o ptr
printf("Numero: %d\n", numero);
*ptr = 90560; // colocando um valor aonde o ponteiro aponta
printf("Numero: %d\n", numero);
return 0;
}