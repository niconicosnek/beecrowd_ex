#include <stdio.h>

//SOLVED

int main () {

    int x, y;
    int arr[1000];
    int i = 0;

    do {
        scanf ("%d %d", &x, &y);
        if(x > y){
            arr[i] = 0;
        } else if (y > x){
            arr[i] = 1;
        } else {
            break;
        }
        i++;
    } while (1);

    for (int j = 0; j < i; j++){
        if (arr[j] == 0){
            printf("Decrescente\n");
        } else if (arr[j] == 1){
            printf("Crescente\n");
        }
    }

    return 0;
}