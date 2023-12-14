#include <stdio.h>

//solved

int main () {
    
    int arr[5];
    int par = 0, imp = 0, pos = 0, neg = 0;

    for (int i = 0; i < 5; i++){
        scanf ("%d", &arr[i]);
        if (arr[i] > 0){
            pos++;
        } else if (arr[i] < 0){
            neg++;
        }
        if (arr[i] % 2 == 0){
            par++;
        } else {
            imp++;
        }
    }

    printf("%d valor(es) par(es)\n", par);
    printf("%d valor(es) impar(es)\n", imp);
    printf("%d valor(es) positivo(s)\n", pos);
    printf("%d valor(es) negativo(s)\n", neg);

    return 0;
}