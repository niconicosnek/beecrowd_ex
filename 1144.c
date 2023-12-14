#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//SOLVED

int main () {

    int n;

    scanf("%d", &n);

    for (float i = 1; i <= n; i++){
        printf("%.0f %.0f %.0f\n", i, pow(i, 2), pow(i, 3));
        printf("%.0f %.0f %.0f\n", i, pow(i, 2) + 1, pow(i, 3) + 1);
    }

    return 0;
}