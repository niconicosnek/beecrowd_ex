#include <stdio.h>

//SOLVED

int main(){

    int age, sum = 0, count = 0;

    while(1){ //while true
        scanf("%d", &age);

        if (age < 0){
            break;
        }

        sum += age;
        count++;
    }

    //double average = (double) sum / count;
    printf("%.2lf\n", (double) sum / count /*average*/);
    
    return 0;
}