#include <stdio.h>

int main() {
int numero = 79417;
int *ptr; // Declaração de um ponteiro para int

//Atribuição do endereço de 'numero' ao ponteiro ptr:
ptr = &numero;

//Impressão do endereço de 'numero'
// e seu valor usando o ponteiro
printf("Endereço de 'numero': %p\n", ptr);
printf("Valor de 'numero': %d\n", *ptr);

return 0;
}