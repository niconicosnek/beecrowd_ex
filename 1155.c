#include <stdio.h>

int main(){

    double S = 0;

    for (int i = 1; i <= 100; i++){
        S += 1.0/i; //1.0 pra garantir que a divisão seja feita como double.
    }

    printf("%.2lf\n", S);

    return 0;
}