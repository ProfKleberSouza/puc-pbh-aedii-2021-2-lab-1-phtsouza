
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