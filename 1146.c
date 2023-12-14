#include <stdio.h>

//SOLVED

int main () {

    int x[100000], i = 0;

    while (1){
        scanf("%d", &x[i]);

        if (x[i] == 0){
            break;
        }
        i++;
    }

    int counter = 0;

    for (int j = 0; j < i; j++){
        for (int k = 1; k <= x[j]; k++){
            printf("%d", k);
            counter++;

            if (counter == x[j]){
                printf("\n");
                counter = 0;
            } else {
                printf(" ");
            }
        }
    }
    

    return 0;
}