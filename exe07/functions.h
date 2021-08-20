
int calculaMDC(int a, int b){
    if(b == 0){
        return a;
    }
    else{
        return calculaMDC(b, a%b);
    }
}