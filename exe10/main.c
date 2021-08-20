#include <stdio.h>
#include "functions.h"
#define MAX 1000

int main() {

  int x;
  int vet[MAX];
  
  // printf("Informe a quantidade de numeros da tabela: ");
  scanf("%d", &x);

  if(x==0){
    printf("0");
  }
  else{
    escreveBinario(0, vet, x);
  }

  return(0);
}