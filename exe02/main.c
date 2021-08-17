#include <stdio.h>
#include "functions.h"
#define MAX 1000

int main() {

  int vet[MAX], n, menorN;

  scanf("%d", &n);

  for(int i=0; i<n; i++) {
    // printf("Informe um numero: ");
    scanf("%d", &vet[i]);
  }

  menorN = menor(vet, n);

  printf("MENOR = %d", menorN);

  return(0);
}