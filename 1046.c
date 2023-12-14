#include <stdio.h>

int main () {

    int start, end, gametime;

    scanf("%d %d", &start, &end);

    if (start < end){
        gametime = end - start;
    } else {
        gametime = (24 - start) + end;
    }

    printf("O JOGO DUROU %d HORA(S)\n", gametime);

    return 0;
}