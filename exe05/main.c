#include <stdio.h>
#include <string.h>
#include "functions.h"
#define MAX 1000

int main() {

  char texto[MAX];

  // printf("Digite sua frase: ");
  fgets(texto, MAX, stdin);

  inverte(texto);

  return(0);
}