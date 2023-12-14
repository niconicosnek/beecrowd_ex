#include <stdio.h>
#include <string.h>

//SOLVED

int main () {

    int casos, coelho = 0, rato = 0, sapo = 0, total = 0, temp;
    char tipo;

    scanf("%d", &casos);

    for (int i = 0; i < casos; i++){
        scanf("%d %c", &temp, &tipo);
        total += temp;
        switch (tipo)
        {
        case 'C':
            coelho += temp;
            break;
        case 'R':
            rato += temp;
            break;
        case 'S':
            sapo += temp;
            break;
        default:
            break;
        }
    }

    printf("Total: %d cobaias\n", total);
    printf("Total de coelhos: %d\n", coelho);
    printf("Total de ratos: %d\n", rato);
    printf("Total de sapos: %d\n", sapo);
    printf("Percentual de coelhos: %.2lf %%\n", (double)coelho / total * 100);
    printf("Percentual de ratos: %.2lf %%\n", (double)rato / total * 100);
    printf("Percentual de sapos: %.2lf %%\n", (double)sapo / total * 100);
    

    return 0;
}