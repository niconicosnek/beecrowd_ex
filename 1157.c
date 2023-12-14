#include <stdio.h>

//SOLVED

int main(){

    int n;

    scanf("%d", &n);

    for (int i = 1; i <= n; i++){ //n/0 é indeterminado.
        if (n % i == 0){
            printf("%d\n", i);
        }
    }

    return 0;
}