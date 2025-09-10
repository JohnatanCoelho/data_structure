#include <stdlib.h>;
#include <stdio.h>; 

typedef //da um apelido para a a estrutura 
struct cel
{
    int conteudo; // Algum conteúdo do tipo inteiro
    struct cel *seg; // É criado um ponteiro para a próxima célula seguinte

} celula; //Apelido

void conectar(celula *p){
    celula *nova;
    nova = malloc(sizeof(celula));
    nova -> conteudo = 2;
    nova -> seg = NULL;
    p -> seg = nova;
    printf("\n%p nova", nova);
}

void main(){

    celula *p, *lst;
    p = malloc(sizeof(celula));
    lst = p;
    p->conteudo = 30;

    printf("%d", p->conteudo);

    conectar(p);

     printf("\n%p seg", p->seg);

}