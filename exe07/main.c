#include <stdio.h>
#include "functions.h"

int main() {

  int x, y, resultado;

  scanf("%d", &x);
  scanf("%d", &y);

  resultado = calculaMDC(x, y);
  printf("MDC = %d", resultado);

  return(0);
}