#include <stdio.h>

//solved

int main () {

    char dia_inicio[4], dia_fim[4];
    int dia_inicial, dia_final;
    int hora_inicial, min_inicial, seg_inicial;
    int hora_final, min_final, seg_final;
    int dur_dia, dur_hora, dur_min, dur_seg;

    scanf("%s %d", dia_inicio, &dia_inicial);
    scanf("%d : %d : %d", &hora_inicial, &min_inicial, &seg_inicial);
    scanf("%s %d", dia_fim, &dia_final);
    scanf("%d : %d : %d", &hora_final, &min_final, &seg_final);

    dur_seg = (dia_final - dia_inicial) * 86400 + (hora_final - hora_inicial) * 3600 + (min_final - min_inicial) * 60 + (seg_final - seg_inicial);

    dur_dia = dur_seg / 86400;
    dur_seg %= 86400;
    dur_hora = dur_seg / 3600;
    dur_seg %= 3600;
    dur_min = dur_seg / 60;
    dur_seg %= 60;

    printf("%d dia(s)\n", dur_dia);
    printf("%d hora(s)\n", dur_hora);
    printf("%d minuto(s)\n", dur_min);
    printf("%d segundo(s)\n", dur_seg);

    return 0;
}