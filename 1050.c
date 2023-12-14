#include <stdio.h>
#include <string.h>

//solved

int main(){

    int ddd;
    char destino[20];

    scanf("%d", &ddd);

    switch (ddd){
        case (61): 
            strcpy(destino, "Brasilia");
            break;
        case (71): 
            strcpy(destino, "Salvador");
            break;
        case (11): 
            strcpy(destino, "Sao Paulo");
            break;
        case (21): 
            strcpy(destino, "Rio de Janeiro");
            break;
        case (32): 
            strcpy(destino, "Juiz de Fora");
            break;
        case (19): 
            strcpy(destino, "Campinas");
            break;
        case (27): 
            strcpy(destino, "Vitoria");
            break;
        case (31): 
            strcpy(destino, "Belo Horizonte");
            break;
        default:
            strcpy(destino, "DDD nao cadastrado");
    }

    printf("%s\n", destino);

    return 0;
}