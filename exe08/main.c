#include <stdio.h>
#include <stdbool.h>
#include "functions.h"

int main() {

  int palavra[100], final;

  printf("Informe sua palavra: ");
  fgets(palavra, sizeof(palavra), stdin);

  final = strlen(palavra) - 2;

  if(verificaPalindromo(palavra, 0, final) == false){
    printf("NAO");
  }
  if(verificaPalindromo(palavra, 0, final) == true){
    printf("SIM");
  }

  return(0);
}