#include <stdio.h>

//SOLVED

int main () {

    float i = 0;
    float j = 1;

    while (i <= 2){
        if (i == 0 || i == 1 || i == 2){
            for (int n = 0; n < 3; n++){
                printf("I=%.0f J=%.0f\n", i, j);
                j++;
            }

            i += 0.2;
            j += 0.2;
            j -= 3;

        } else {
            for (int n = 0; n < 3; n++){
                printf("I=%.1f J=%.1f\n", i, j);
                j++;
            }
            i += 0.2;
            j += 0.2;
            j -= 3;
        }
        
    }

    for (int n = 0; n < 3; n++){
        printf("I=%.0f J=%.0f\n", i, j);
        j++;
    }

    return 0;
}