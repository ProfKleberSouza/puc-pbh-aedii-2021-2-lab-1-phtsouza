#include <stdio.h>
#include "functions.h"

int main() {

  int n1, n2, soma;
  
  // ENTRADA DE DADOS
  scanf("%d %d", &n1, &n2);

  // PROCESSAMENTO - EXECUTANDO A FUNCAO
  soma = somar(n1, n2);

  // SAIDA - IMPRIMINDO O RESULTADO
  printf("SOMA = %d\n", soma);

  return(0);
}