// Exemplo – C++: new e delete[]
int main () {
int pind, ptam;
float *pVetor; //Declaração dos ponteiros
printf (“Digite a qtde de elementos: ");
scanf ("%d",ptam);
pVetor = new float[ptam];    //Alocação de memória
for(pind=0;pind<ptam;pind++)
    pVetor[pind] = ((float)pind)/ptam;
for(pind=0;pind<ptam;pind++)
    printf (“%f“,pVetor[pind]);
delete[] pVetor;     //Desalocação de memória
return 0;
}