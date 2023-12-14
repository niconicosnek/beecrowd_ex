#include <stdio.h>

//SOLVED

int main () {

    int pass;
    int arr[1000];
    int i = 0;

    do {

        scanf ("%d", &pass);

        if(pass != 2002){
            arr[i] = 0;
        } else if (pass == 2002){
            arr[i] = 1;
            break;
        }

        i++;

    } while (1);

    for (int j = 0; j <= i; j++){
        if (arr[j] == 0){
            printf("Senha Invalida\n");
        } else if (arr[j] == 1){
            printf("Acesso Permitido\n");
        }
    }

    return 0;
}