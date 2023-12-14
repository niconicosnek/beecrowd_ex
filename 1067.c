#include <stdio.h>

//solved

void printX(int x){

    for (int i = 0; i <= x; i++){
        if (i % 2 != 0){
            printf("%d\n", i);
        }
    }
}

int main () {

    int x;

    scanf("%d", &x);
    printX(x);

    return 0;
}