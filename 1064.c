#include <stdio.h>

//solved

int main () {

    int count = 0;
    float soma = 0;
    float v[6];

    for (int i = 0; i < 6; i++){
        scanf("%f", &v[i]);
        if (v[i] > 0){
            count++;
            soma += v[i];
        }
    }

    printf("%d valores positivos\n", count);
    printf("%.1f\n", soma/count);

    return 0;
}