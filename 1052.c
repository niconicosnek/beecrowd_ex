#include <stdio.h>
#include <string.h>

//solved

int main(){

    int m;
    char mes[10];

    scanf("%d", &m);

    switch (m)
    {
    case (1):
        strcpy(mes, "January");
        break;
    case (2):
        strcpy(mes, "February");
        break;
    case (3):
        strcpy(mes, "March");
        break;
    case (4):
        strcpy(mes, "April");
        break;
    case (5):
        strcpy(mes, "May");
        break;
    case (6):
        strcpy(mes, "June");
        break;
    case (7):
        strcpy(mes, "July");
        break;
    case (8):
        strcpy(mes, "August");
        break;
    case (9):
        strcpy(mes, "September");
        break;
    case (10):
        strcpy(mes, "October");
        break;
    case (11):
        strcpy(mes, "November");
        break;
    case (12):
        strcpy(mes, "December");
        break;
    default:
        break;
    }

    printf("%s\n", mes);

    return 0;
}