/*  1 20
    2 19
    3 18
    4 17
    5 16
    6 15
    7 14
    8 13
    9 12
    10 11  */

#include <stdio.h>

int main () {

    int N[20];

    for (int i = 0; i < 20; i++){
        scanf("%d", &N[i]);
    }

    for (int i = 0; i < 10; i++){
        int temp = N[i];
        N[i] = N[19 - i];
        N[19 - i] = temp;
    }

    for (int i = 0; i < 20; i++){
        printf("N[%d] = %d\n", i, N[i]);
    }


    return 0;
}