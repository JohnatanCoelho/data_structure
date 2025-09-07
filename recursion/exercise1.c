#include <stdio.h>;

int count(int n){
    if(n == 1){
        return 1;
    } else {
        return n + count(n - 1);
    }
}

void main(){
    int n = 5;
    int *pn = &n;
    
    printf("%d",count(*pn));
    
}