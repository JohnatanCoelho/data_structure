# include <stdio.h>

int subtrai(int a, int b){
return a = a - b;
}


void main(){
int a = 10;
int b = 20;

int *pa;

pa = &a;

// Aprensenta o endereço de memória de A
printf("%d \n", pa);

// Aprensenta o valor que está armazenado em A
printf("%d \n", *pa);

// Entrando dentro da memória de A e alterando seu valor
*pa = *pa + 1;
printf("%d \n", *pa);

//Valor de A
printf("%d \n", a);

// Endereço de A
printf("%d \n", &a);

//Tentando mudar a para um ponteiro
//printf(*a) --> Dá erro devido a ser inteiro e possuir um valor

//&* Mostra o endereço de A, pois o pa está puxando o valor de a com * e retorna o endereço &
printf("%d", &*pa);

}

