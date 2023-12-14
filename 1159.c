#include <stdio.h>

//SOLVED

int main(){

    int x, soma[1000] = {0}, index = 0;

    while(1){
        scanf("%d", &x);

        if (x == 0){
            break;
        }

        for (int i = 0; i < 5; i++){
            if (x % 2 != 0){
                x++;
            }
            soma[index] += x;
            x += 2;
        }
        index++;
    }

    for (int i = 0; i < index; i++){
        printf("%d\n", soma[i]);
    }

    return 0;
}