#include <stdio.h>
#include <stdlib.h>

//solved

int main () {

    int n, *val;

    scanf("%d", &n);

    val = (int *)malloc(n * sizeof(int));

    if (val == NULL){
        return 1;
    }

    for (int i = 0; i < n; i++){
        scanf("%d", &val[i]);
    }

    for (int i = 0; i < n; i++){
        if (val[i] == 0){
            printf("NULL\n");
        }else if (val[i] > 0 && val[i] % 2 == 0){
            printf("EVEN POSITIVE\n");
        } else if (val[i] < 0 && val[i] % 2 == 0){
            printf("EVEN NEGATIVE\n");
        } else if (val[i] > 0 && val[i] % 2 != 0){
            printf("ODD POSITIVE\n");
        } else if (val[i] < 0 && val[i] % 2 != 0){
            printf("ODD NEGATIVE\n");
        }
    }

    return 0;
}