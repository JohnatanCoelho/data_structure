#include <stdio.h>;

void main(){
    int num;
    int num2;

    int *pnum = &num;
    int *pnum2 = &num2;

    if(pnum > pnum2){
        printf("O maior endereço é num1 %d", pnum);
    } else{
        printf("O maior endereço é num2 %d", pnum2);
    }

}