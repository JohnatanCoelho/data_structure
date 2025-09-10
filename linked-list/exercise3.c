#include <stdlib.h>;
#include <stdio.h>; 


typedef
struct celula
{
    int conteudo;
    struct celula *seg;
}cel;

cel* contagemAte5(int n){
    if(n == 6){
        return NULL;
    }else{
        cel * p;
        p = malloc(sizeof(cel));
        p->conteudo = n;
        p->seg = contagemAte5(n+1);
        return p;
    }
}


void main(){
    int n = 1;
    recursion(n);
}