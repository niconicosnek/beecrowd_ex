#include <stdio.h>
#include <stdlib.h>

//solved
//gostei desse :D

int main () {

    int n;
    double **val;

    scanf("%d", &n);

    val = (double **)malloc(n * sizeof(double)); //alocação dinâmica das tuplas da matriz

    if (val == NULL){
        return 1;
    }

    for (int i = 0; i < n; i++){
        val[i] = (double *)malloc(3 * sizeof(double)); //alocação dinâmica das colunas da matriz

        if (val[i] == NULL){
            return 1;
        }

        scanf("%lf %lf %lf", &val[i][0], &val[i][1], &val[i][2]);
    }

    for (int i = 0; i < n; i++){
        double media = ((val[i][0]*2 + val[i][1]*3 + val[i][2]*5) / 10); //divide pela soma dos pesos
        printf ("%.1lf\n", media);
    }

    for (int i = 0; i < n; i++){
        free (val[i]); //liberar memória
    }

    free (val); //liberar memória 2

    return 0;
}