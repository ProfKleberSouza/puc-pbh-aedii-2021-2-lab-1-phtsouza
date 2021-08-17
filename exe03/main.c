#include <stdio.h>
#include "functions.h"
#define MAX 1000

int main(){

  int menor, maior;
  int n, v[MAX];
  
  // printf("Informe quantos numeros deseja passar: ");
  scanf("%d", &n);

  for(int i = 0; i<n; i++){
    // printf("Informe um numero: ");
    scanf("%d", &v[i]);
  }

  menor_maior(v, n, &menor, &maior);

  printf("MENOR = %d\n", menor);
  printf("MAIOR = %d", maior);

  return(0);
}