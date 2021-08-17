#include <stdio.h>
#include "functions.h"
#include <string.h>
#define MAX 1000

int main() {

  char frase[MAX];

  // printf("Digite uma frase: ");
  fgets(frase, MAX, stdin);

  numero_vogais(frase);

  return(0);
}