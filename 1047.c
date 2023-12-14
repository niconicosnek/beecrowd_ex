#include <stdio.h>

//solved

int main (){
    
    int hora_inicial, hora_final, min_inicial, min_final;
    int duracao_hora, duracao_min;

    scanf ("%d %d %d %d", &hora_inicial, &min_inicial, &hora_final, &min_final);

    duracao_hora = hora_final - hora_inicial;
    duracao_min = min_final - min_inicial;

    if (duracao_min < 0){
        duracao_hora--;
        duracao_min += 60;
    }

    if (duracao_hora < 0){
        duracao_hora += 24;
    }

    if (hora_inicial == hora_final && min_inicial == min_final){
        duracao_hora = 24;
        duracao_min = 0;
    }

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", duracao_hora, duracao_min);

    return 0;
}