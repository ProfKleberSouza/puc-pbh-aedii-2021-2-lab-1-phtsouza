#include <string.h>
#include <stdio.h>

void inverte(char texto[]){
    char aux;
    int i, j;

    i = 0;
    j = strlen(texto) - 1;

    while(i < j){
        aux = texto[i];
        texto[i] = texto[j];
        texto[j] = aux;
        i++;
        j--;
    }
    printf("%s", texto);
}