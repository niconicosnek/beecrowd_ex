#include <stdio.h>
#include <stdlib.h>

//SOLVED

int main () {

    int n;

    scanf("%d", &n);

    float div[n];

    for (int i = 0; i < n; i++){
        int x, y;
        scanf("%d %d", &x, &y); //o que estava errado neste programa ontem era esse scanf (tava %f %f como se fosse ler um float)
        if(y == 0){
            div[i] = -1;
        } else {
            div[i] = (float)x / y;
        }
    }

    for (int j = 0; j < n; j++){
        if (div[j] == -1){
            printf("divisao impossivel\n");
        } else {
            printf("%.1f\n", div[j]);
        }
    }

    return 0;
}