#include <stdio.h>
#include "functions.h"

int main() {

  int a, b, y;
  char placar[100];

  printf("Informe o valor de A: ");
  scanf("%d", &a);

  printf("Informe o valor de B: ");
  scanf("%d", &b);

  cria_placar(a, b, placar);
  for(y = 0; y< b; y++){
    placar_possiveis(a, b, placar, y);
  }

  return(0);
}