#include <stdio.h>
#include <string.h>

//solved

int main(){
    char op1[13], op2[13], op3[13], resultado[13];

    scanf("%s", op1);
    scanf("%s", op2);
    scanf("%s", op3);

    if (strcmp(op1, "vertebrado") == 0){
        if (strcmp(op2, "ave") == 0){
            if(strcmp(op3, "carnivoro") == 0){
                strcpy(resultado, "aguia");
            } else if(strcmp(op3, "onivoro") == 0){
                strcpy(resultado, "pomba");
            }
        } else if (strcmp(op2, "mamifero") == 0){
            if(strcmp(op3, "onivoro") == 0){
                strcpy(resultado, "homem");
            } else if(strcmp(op3, "herbivoro") == 0){
                strcpy(resultado, "vaca");
            }
        }
    } else if (strcmp(op1, "invertebrado") == 0){
        if (strcmp(op2, "inseto") == 0){
            if (strcmp(op3, "hematofago") == 0){
                strcpy(resultado, "pulga");
            } else if (strcmp(op3, "herbivoro") == 0){
                strcpy(resultado, "lagarta");
            }
        } else if (strcmp(op2, "anelideo") == 0){
            if (strcmp(op3, "hematofago") == 0){
                strcpy(resultado, "sanguessuga");
            } else if (strcmp(op3, "onivoro") == 0){
                strcpy(resultado, "minhoca");
            }
        }
    }

    printf("%s\n", resultado);


    return 0;
}