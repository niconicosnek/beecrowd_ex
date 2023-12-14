#include <stdio.h>

int main () {

    int arr[100], maior = 0, pos;

    for (int i = 0; i < 100; i++){
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < 100; i++){
        if (i == 0 || arr[i] > maior){
            maior = arr[i];
            pos = i + 1;
        }
    }

    printf("%d\n", maior);
    printf("%d\n", pos);

    return 0;
}