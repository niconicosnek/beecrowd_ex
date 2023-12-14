#include <stdio.h>

//solved

float PercentualReajuste (float salario){
    if (salario <= 400){
        return 15;
    } else if (salario <= 800){
        return 12;
    } else if (salario <= 1200){
        return 10;
    } else if (salario <= 2000){
        return 7;
    } else {
        return 4;
    }
}

float CalcularReajuste (float salario, float percentual){
    return salario * (percentual / 100);
}

float NovoSalario (float salario, float reajuste){
    return salario + reajuste;
}

int main (){
    float salario, percentual, reajuste, novosal;

    scanf ("%f", &salario);

    percentual = PercentualReajuste (salario);
    reajuste = CalcularReajuste (salario, percentual);
    novosal = NovoSalario (salario, reajuste);

    printf("Novo salario: %.2f\n", novosal);
    printf("Reajuste ganho: %.2f\n", reajuste);
    printf("Em percentual: %.0f %%\n", percentual);

    return 0;
}