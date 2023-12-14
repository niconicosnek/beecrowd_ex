#include <stdio.h>
#include <stdlib.h>

//SOLVED

int *soma(int n){
    int x, y, *sum = (int *)malloc(n * sizeof(int));
    
    for (int i = 0; i < n; i++){
        scanf("%d %d", &x, &y);

        if(x % 2 == 0){ //verifica se x é par, se sim, transforma em ímpar 
            x++;
        }

        sum[i] = 0;

        while(y > 0){
        
            if(x % 2 != 0){ //condição para a soma
                sum[i] += x;
                y--;
            }
            x += 2; //garante que apenas os ímpares entrarão na soma
        }
    }
    return sum;
}

int main(){

    int n; //soma[1000] = {0} define todos os valores do array como 0

    scanf("%d", &n);

    int *result = soma(n);

    for (int i = 0; i < n; i++){
        printf("%d\n", result[i]);
    }

    free(result);

    return 0;
}