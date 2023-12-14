#include <stdio.h>

//solved

int main () {

    int n;

    scanf("%d", &n);

    if(n < 2 || n > 1000){
        return 1;
    } else {
        for (int i = 1; i <= 10; i++){
            printf("%d x %d = %d\n", i, n, (i * n));
        }
    }

    return 0;
}