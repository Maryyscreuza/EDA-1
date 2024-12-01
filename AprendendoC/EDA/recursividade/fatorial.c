#include <stdlib.h>
#include <stdio.h>

int fat(int n){
	if(n>1){
    printf("%d\n", n);
		return n*fat(n-1);
    }
	else {
		return 1;
    }
}

int main() {
  int n;
  printf("Digite o numero inteiro: ");
  scanf("%d", &n);
  printf("O fatorial do número %d é %d", n, fat(n));
}
	