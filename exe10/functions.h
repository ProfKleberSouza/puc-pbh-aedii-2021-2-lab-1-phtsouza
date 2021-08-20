#include <stdio.h>

void escreveBinario(int num, int bin[], int n){
    int i = 0;
    int aux = num;
    
    for(int k = 0; k<=n; k++){
        bin[k] = 0;
    }

    while(aux>0){
        bin[i] = aux % 2;
        i++;
        aux /=2;
    }
    printf("\n");
    for(int j = n-1; j >= 0; j--){
        printf("%d ",bin[j]);
    }
    if(num < pow(2, n)-1){
        num++;
        escreveBinario(num, bin, n);
    }
}
