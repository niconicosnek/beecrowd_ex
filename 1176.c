#include <stdio.h>

//SOLVED

unsigned long long int fibo(int fiboLast); //64 bits sem sinal (positivos).

int main () {

    int n;

    scanf("%d", &n);

    unsigned long long int result[n];
    int fiboPos[n];

    for (int i = 0; i < n; i++){
        int fiboLast;
        scanf("%d", &fiboLast);
        fiboPos[i] = fiboLast;
        result[i] = fibo(fiboLast);
    }

    for (int i = 0; i < n; i++){
        printf("Fib(%d) = %llu\n", fiboPos[i], result[i]);
    }

    return 0;
}

unsigned long long int fibo(int fiboLast){

    if (fiboLast == 0){
        return 0;
    } else if (fiboLast == 1){
        return 1;
    } else {
        unsigned long long int a = 0, b = 1, temp;
        for (int i = 2; i <= fiboLast; i++){
            temp = a + b;
            a = b;
            b = temp;
        }
        return b;
    }
    
}