#include <stdio.h>
#include <stdlib.h>

//solved

int main () {

    int n, *val, in = 0, out = 0;

    scanf("%d", &n);

    val = (int *)malloc(n * sizeof(int));

    if (val == NULL){
        return 1;
    }

    for (int i = 0; i < n; i++){
        scanf ("%d", &val[i]);
        if(val[i] >= 10 && val[i] <= 20){
            in++;
        } else {
            out++;
        }
    }

    printf("%d in\n", in);
    printf("%d out\n", out);

    return 0;
}