#include <stdio.h>;
#include <stdlib.h>;

typedef
struct cel{
    int conteudo;
    struct cel *seg;
} celula;

celula* conectar(celula *p, int n){
    p -> conteudo = n;
    p-> seg = malloc(sizeof(celula));
    return p->seg;
}

void main(){
    celula *lst, *p;
    lst = malloc(sizeof(celula));
    lst->conteudo = 0;
    lst -> seg = malloc(sizeof(celula));
    p = conectar(lst->seg, 1);
}