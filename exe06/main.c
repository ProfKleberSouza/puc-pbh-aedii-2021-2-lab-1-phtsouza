#include <stdio.h>
#include "functions.h"

int main() {

  int x, n, resposta;

  // printf("Informe o numero: ");
  scanf("%d", &x);
  
  // printf("Informe a potencia: ");
  scanf("%d", &n);
  
  resposta = potencia(x, n);

  printf("%d", resposta);
  return(0);
}