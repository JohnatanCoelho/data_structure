#include <stdio.h>;

double induction(int n){
    if(n == 1){
        return n;  
    } else{
        return (1.0/n) + induction(n - 1);
    }
}

void main(){
    int n = 5;
    printf("%f",induction(n));

}