#include <stdio.h>

//SOLVED

int main () {

    int x, y, val[1000], j = 0;

    scanf("%d %d", &x, &y);

    if (x > y){
        int temp = x;
        x = y;
        y = temp;
    }

    for (int i = (x + 1); i < y; i++){
        if (i % 5 == 2 || i % 5 == 3){
            val[j] = i;
            j++;
        }
    }

    for (int i = 0; i < j; i++){
        printf("%d\n", val[i]);
    }

    return 0;
}