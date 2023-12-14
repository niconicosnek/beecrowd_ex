#include <stdio.h>

//SOLVED

int main(){

    double S = 1;
    double num = 3.0, den = 2.0;

    for (int i = 1; i < 19; i++){
        S += num/den;
        num += 2.0;
        den *= 2.0;
    }

    printf("%.2lf\n", S);

    return 0;
}