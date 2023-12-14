#include <stdio.h>

//SOLVED

int main () {

    int x, y;

    scanf ("%d %d", &x, &y);

    int counter = 0;

    for (int i = 1; i <= y; i++){
        printf("%d", i);

        counter++;

        if (counter == x || i == y){
            printf("\n");
            counter = 0;
        } else {
            printf(" ");
        }
    }

    return 0;
}