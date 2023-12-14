#include <stdio.h>

//solved

int main(){

    int n;

    scanf("%d", &n);

    for (int i = 0; i <= n; i++){
        if (i % 2 == 0 && i != 0){
            printf("%d^2 = %d\n", i, i*i);
        }
    }

    return 0;
}