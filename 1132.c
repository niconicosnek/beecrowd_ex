#include <stdio.h>

//SOLVED

int main () {

    int x, y, soma = 0;

    scanf("%d %d", &x, &y);

    if (x > y){
        int temp = x;
        x = y;
        y = temp;
    }

    for (int i = x; i <= y; i++){
        if (i % 13 != 0){
            soma += i;
        }
    }

    printf("%d\n", soma);

    return 0;
}