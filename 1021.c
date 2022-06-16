#include <stdio.h>
#include <math.h>

int main()
{
    float n;
    int i = 0;
    scanf("%f", &n);
    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", ((int) n)/ 100);
    n = (fmod(n, 100));
    printf("%d nota(s) de R$ 50.00\n", ((int) n)/ 50);
    n = (fmod(n, 50));
    printf("%d nota(s) de R$ 20.00\n", ((int) n)/ 20);
    n = (fmod(n, 20));
    printf("%d nota(s) de R$ 10.00\n", ((int) n)/ 10);
    n = (fmod(n, 10));
    printf("%d nota(s) de R$ 5.00\n", ((int) n)/ 5);
    n = (fmod(n, 5));
    printf("%d nota(s) de R$ 2.00\n", ((int) n)/ 2);
    n = (fmod(n, 2));
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", ((int) n));
    i = n;
    n = n - i;
    n *= 100;
    printf("%d moeda(s) de R$ 0.50\n", ((int) n/50));
    n = (fmod(n, 50));
    printf("%d moeda(s) de R$ 0.25\n", ((int) n/25));
    n = (fmod(n, 25));
    printf("%d moeda(s) de R$ 0.10\n", ((int) n/10));
    n = (fmod(n, 10));
    printf("%d moeda(s) de R$ 0.05\n", ((int) n/5));
    n = (fmod(n, 5));
    n = round(n);
    printf("%d moeda(s) de R$ 0.01\n", ((int) n));
    return 0;
}