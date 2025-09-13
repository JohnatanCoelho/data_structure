#include <stdio.h>;
#include <stdlib.h>;

//Inserção de 0 em uma lista com cabeça

typedef
struct cel{
    int conteudo;
    struct cel *seg;
} celula;

celula* conectar(celula *p, int n){
    p = p -> seg = malloc(sizeof(celula));
    p -> conteudo = n;
    return p;
}

void inserir(celula *lst, int n){
    celula *nova;
    nova -> conteudo = 0;
    nova -> seg = lst -> seg;
    lst -> seg = nova;
}

void main(){
    celula *lst, *p;
    lst = malloc(sizeof(celula));
    lst -> seg = NULL;
    p = conectar(lst, 1);
    inserir(lst, 0);
}