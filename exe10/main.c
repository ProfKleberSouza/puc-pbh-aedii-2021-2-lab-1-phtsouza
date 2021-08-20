#include <stdio.h>
#include "functions.h"
#define MAX 1000

int main() {

  int x;
  int vet[MAX];
  
  printf("Informe a quantidade de numeros da tabela: ");
  scanf("%d", &x);

  primeiroTabela(x, vet);
  tabela_verdade(x, vet);

  return(0);
}