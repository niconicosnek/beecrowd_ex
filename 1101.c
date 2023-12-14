#include <stdio.h>

//UNSOLVED

int main () {

    int m, n;
    int maior, menor, soma;

    while (m > 0 || n > 0){
        scanf("%d %d", &m, &n);

        if (m > n){
            maior = m;
            menor = n;           
        } else {
            maior = n;
            menor = m;
        }
    }

    return 0;
}