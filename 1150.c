#include <stdio.h>

//SOLVED

int counter(int x, int z){

    int soma = 0, count = 0;

    while (soma <= z){
        soma += x;
        x++;
        count++;
    }

    return count;
}

int main(){

    int x, z;

    scanf("%d", &x);

    z = x;

    while (z <= x){
        scanf("%d", &z);
    }

    printf("%d\n", counter(x, z));

    return 0;
}