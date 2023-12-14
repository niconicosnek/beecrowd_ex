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
        j = 7;
    }

    return 0;
}