#include <stdio.h>

int main () {

    int n[1000];
    int t;

    scanf("%d", &t);

    if(t <= 2 || t >= 50){
        return 1;
    }

    for(int i = 0; i < 1000; i++){
        n[i] = i % t; 
    }

    /*
        0%3 = 0
        1%3 = 1
        2%3 = 2
        3%3 = 0
        4%3 = 1
        5%3 = 2
        6%3 = 0
        ...
                */

    for (int i = 0; i < 1000; i++){
        printf("N[%d] = %d\n", i, n[i]);
    }

    return 0;
}