#include <stdbool.h>

bool verificaPalindromo(char palavra[], int inicio, int final){
    
    if(final>inicio){
        if(palavra[final] == palavra[inicio]){
            final--;
            inicio++;
            verificaPalindromo(palavra, inicio, final);
            return true;
        }
        else{
            return false;
        }
    }
}