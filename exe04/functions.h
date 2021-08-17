#include <string.h>
#include <stdio.h>

void numero_vogais(char texto[]){

    int a = 0 , e = 0, I = 0, o = 0, u = 0;

    for(int i=0; i<strlen(texto); i++){
        if(texto[i]=='a' || texto[i]=='A'){
            a++;
        }
        if(texto[i]=='e' || texto[i]=='E'){
            e++;
        }
        if(texto[i]=='i' || texto[i]=='I'){
            I++;
        }
        if(texto[i]=='o' || texto[i]=='O'){
            o++;
        }
        if(texto[i]=='u' || texto[i]=='U'){
            u++;
        }
    }

    printf("A = %d\n", a);
    printf("E = %d\n", e);
    printf("I = %d\n", I);
    printf("O = %d\n", o);
    printf("U = %d\n", u);
}