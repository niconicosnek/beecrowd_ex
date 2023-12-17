#include <stdio.h>

int main(){

    int n;
    int arr[10];

    scanf("%d", &n);

    if(n >= 50){
        return 1;
    }

    for(int i = 0; i < 10; i++){
        arr[i] = n;
        n *= 2;
    }

    for(int i = 0; i < 10; i++){
        printf("N[%d] = %d\n", i, arr[i]);
    }

    return 0;
}