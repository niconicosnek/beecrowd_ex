#include <stdio.h>

//SOLVED

int fat(int n){

    if (n == 0 || n == 1){
        return 1;
    } else {
        return n * fat(n - 1); //resursivo
    }
}


int main(){

    int n;

    scanf("%d", &n);

    if (n < 0 || n >= 13){
        return 1;
    }

    printf("%d\n", fat(n));

    return 0;
}