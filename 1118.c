#include <stdio.h> //me acostumando com o teclado novo :)

//UNSOLVED

int main () {

    float nota, soma[1000], media[1000];
    int count = 0, newCount = 1, invalid = 0, i = 0;


    while (newCount == 1){
        
        while (count < 2){

            scanf("%f", &nota);

            if (nota < 0 || nota > 10){
                invalid++;
            } else {
                soma[i] += nota;
                count++;
            }
        }
        media[i] = soma[i]/2;
        i++;    

        printf("novo calculo (1-sim 2-nao)\n");
        scanf("%d", &newCount);

        while (newCount != 1 && newCount != 2){
            printf("novo calculo (1-sim 2-nao)\n");
            scanf("%d", &newCount);
        }
    }

        for (int i = 0; i < invalid; i++){
            printf("nota invalida\n");
        }

    return 0; 
}