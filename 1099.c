#include <stdio.h>
#include <stdlib.h>

//SOLVED

int main () {

    int n;

    scanf("%d", &n);

    int *soma = (int *)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++){

        int x, y;

        scanf("%d %d", &x, &y);

        int somatemp = 0;

        if (x > y){
            int temp = x;
            x = y;
            y = temp;
        }
    
        if (x == y || (x + 1) == (y)){
            soma[i] = 0;
        } else {
            for (int j = (x + 1); j < y ; j++){
                if (j % 2 != 0){
                    somatemp += j;
                }
                soma[i] = somatemp;
            }
            somatemp = 0;
        }
    }

    for (int i = 0; i < n; i++){
        printf("%d\n", soma[i]);
    }

    free (soma);

    return 0;
}