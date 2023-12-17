#include <stdio.h>
#include <stdlib.h>

int isPrime(int number);

int main(){

    int n;

    scanf("%d", &n);

    int *arr = (int *)malloc(n * sizeof(int));

    for(int i = 0; i < n; i++){

        scanf("%d", &arr[i]);

    }

    /*
    
        ChatGPT:
        
        A verificação de primos até arr[i] / 2 é uma otimização.:

        Para verificar se um número N é primo, não precisamos procurar por divisores além da metade do próprio número. 
        Isso ocorre porque, se N tiver um divisor maior que a sua metade, obrigatoriamente terá um fator multiplicador menor que a sua metade. 
        Assim, ao verificar divisores até N / 2, já abrangemos todos os possíveis casos.

        Vamos considerar um exemplo para ilustrar:

        Suponha que queremos verificar se o número N = 29 é primo.
        Se procurarmos por divisores até N / 2, ou seja, até 14, já cobrimos todas as possibilidades.
        Se não encontrarmos nenhum divisor até 14, sabemos que N é primo.
        Esse método reduz a quantidade de iterações necessárias para verificar se um número é primo, tornando o processo mais eficiente.

        Portanto, a condição j <= arr[i] / 2 é uma estratégia para otimizar a verificação de primos.
    
    */

    for(int i = 0; i < n; i++){

        if(isPrime(arr[i])){

            printf("%d eh primo\n", arr[i]);

        } else {

            printf("%d nao eh primo\n", arr[i]);

        }

    }

    free(arr);

    return 0;
}

int isPrime(int number){

    if(number < 2){
        return 0;
    }

    for(int i = 2; i <= number / 2; i++){
        if(number % i == 0){
            return 0;
        }
    }

    return 1;
}