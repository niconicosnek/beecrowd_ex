#include <stdio.h>
#include <stdlib.h>

//Time limit exceeded -- Precisa de otimization :(

int main(){

    int T;
    scanf("%d", &T);

    int *result = (int *)malloc(T * sizeof(int));

    for (int i = 0; i < T; i++){
        int PA, PB;
        double G1, G2;
        scanf("%d %d %lf %lf", &PA, &PB, &G1, &G2);

        int anos = 0;

        while (PA <= PB){
            PA += PA * (G1/100);
            PB += PB * (G2/100);

            anos++;    
        }
        result[i] = anos;
    }

    for (int i = 0; i < T; i++){
        if (result[i] > 100){
            printf("Mais de 1 seculo.\n");
        } else {
            printf("%d anos.\n", result[i]);
        }
    }

    free(result);

    return 0;
}