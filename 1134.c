#include <stdio.h>

//SOLVED

int main () {

    int alc, gas, die, x;
    alc = gas = die = x = 0;

    do {
        scanf("%d", &x);
        switch (x)
        {
        case (1):
            alc++;
            break;
        case (2):
            gas++;
            break;
        case (3):
            die++;
            break;
        default:
            break;
        }

    } while (x != 4);

    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n", alc);
    printf("Gasolina: %d\n", gas);
    printf("Diesel: %d\n", die);

    return 0;
}