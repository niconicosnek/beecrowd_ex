#include <stdio.h> //me acostumando com o teclado novo :)

//SOLVED

int main () {

    float nota, soma = 0;
    int count = 0, invalid = 0;

    while (count < 2){

        scanf("%f", &nota);

        if (nota < 0 || nota > 10){
            invalid++;
        } else {
            soma += nota;
            count++;
        }
    }

    for (int i = 0; i < invalid; i++){
        printf("nota invalida\n");
    }

    printf("media = %.2f\n", soma / 2.0);

    return 0; 
}