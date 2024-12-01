// Exemplo - C: malloc, calloc, free
#include <stdlib.h> // Biblioteca de: malloc, calloc, free
int main ()
{
int *Vet1, *Vet2; //Declaração dos ponteiros
Vet1 = (int*) malloc (100*sizeof(int)); //Alocação de memória
Vet2 = (int*) calloc (100, sizeof(int)); //Alocação de memória
free (Vet1); //Desalocação de memória
free (Vet2); //Desalocação de memória
return 0;
}