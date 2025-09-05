#include <stdio.h>

void main(){
    int num = 5;
    double num2 = 2.8;
    char car = 'a';

    int *pnum = &num;
    double *pnum2 = &num2;
    char *pplv = &car;

    // Apresentando os valores da variáveis e não endereços -- Antes da Modificação
    printf("%d \n", *pnum);
    printf("%d \n", *pnum2);
    printf("%c \n", *pplv);

    // Modificação nos valores das variáveis
    *pnum = 9;
    *pnum2 = 3.5;
    *pplv = 'b';

    printf("%d \n", *pnum);
    printf("%d \n", *pnum2);
    printf("%c", *pplv);


}