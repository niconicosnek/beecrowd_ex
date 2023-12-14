#include <stdio.h>

//SOLVED

int main () {

    int n, x = 1;

    scanf("%d", &n);

    for (int i = 0; i < n; i++){
        for (int j = 0; j < 3; j++){
            printf("%d ", x);
            x++;
        }
        printf("PUM\n");
        x++;
    }

    return 0;
}