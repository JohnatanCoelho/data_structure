#include <stdio.h>;

void main(){
    char plv [] = {'a', 'b', 'd'};
    char *pplv;

    pplv = plv;
    
    printf("%d \n", *pplv++);
    printf("%d \n", *pplv++);
    printf("%d \n", *pplv++);
}