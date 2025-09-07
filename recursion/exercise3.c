#include <stdio.h>;

int potentiation(int x, int k){
    if(k == 0){
        return 1;
    }else{
        return x * potentiation(x, k - 1);
    }
}

void main(){
     int x, k, *px, *pk;
     x = 8;
     k = 6;
     px = &x;
     pk = &k;
     
     printf("%d",potentiation(*px, *pk));

}