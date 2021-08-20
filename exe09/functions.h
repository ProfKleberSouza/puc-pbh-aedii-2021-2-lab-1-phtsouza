
void cria_placar(int a, int b, char placar[]){
    int i;
    for(i = 0; i< a; i++){
        placar[i] = 'A';
        printf("%c", placar[i]);
    }
    for(i=a; i < a + b; i++){
        placar[i] = 'B';
        printf("%c", placar[i]);
    }
}

void placar_possiveis(int m, int n, char s[], int y){
    int aux;
    for(int i=y; i < m + n; i++){
        if(s[i]=='B'){
            aux = i;
            break;
        }
    }
    if(s[y]!='B'){
        printf("\n");
        s[aux]='A';
        s[aux-1]='B';
        for(int i=0; i< m+n; i++){
            printf("%c", s[i]);
        }
        placar_possiveis(m, n, s, y);
    }
}

void placar_faltante(int m, int n, char vet[]){
    int i;
    printf("\n");
    for(i=0; i<n; i++){
        vet[i] = 'A';
        printf("%c", vet[i]);
    }
    for(i = n; i< 2*n; i++){
        vet[i] = 'B';
        printf("%c", vet[i]);
    }
    for(i; i<m+n; i++){
        vet[i] = 'A';
        printf("%c", vet[i]);
    }
}