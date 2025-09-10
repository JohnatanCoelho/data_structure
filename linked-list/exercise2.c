#include <stdlib.h>;
#include <stdio.h>; 

typedef
struct celula
{
    int conteudo;
    struct celula *seg;
}cel;

cel* contagemRegressiva(int n){
    if(n == 0){
        return NULL;
    } else{
       cel *p = malloc(sizeof(cel));
       p -> conteudo = n;
       p-> seg = contagemRegressiva(n-1);
       return p;
    }
}

void main(){
    int n = 5;
   contagemRegressiva(n);
}
