#include <stdio.h>

//SOLVED

int main () {

    int x, y;
    int res[1000];
    int i = 0;

    do {
        scanf ("%d %d", &x, &y);

        if (x > 0 && y > 0){
            res[i] = 1;
        } else if (x < 0 && y > 0){
            res[i] = 2;
        } else if (x < 0 && y < 0){
            res[i] = 3;
        } else if (x > 0 && y < 0){
            res[i] = 4;
        } else if (x == 0 || y == 0){
            break;
        }

        i++;

    } while (1);

    for (int j = 0; j <= i; j++){
        if (res[j] == 1){
            printf("primeiro\n");
        } else if (res[j] == 2){
            printf("segundo\n");
        } else if (res[j] == 3){
            printf("terceiro\n");
        } else if (res[j] == 4){
            printf("quarto\n");
        }
    }

    return 0;
}