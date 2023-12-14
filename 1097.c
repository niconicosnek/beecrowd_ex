#include <stdio.h>

//SOLVED

int main () {

    int i = 1;
    int j = 7;

    while (i <= 9){
        for (int n = 0; n < 3; n++){
            printf("I=%d J=%d\n", i, j);
            j--;
        }
        i += 2;
        j += 5; //tem que ser 5 pois no final do loop for após o print, acontece mais um decremento
    }

    return 0;
}