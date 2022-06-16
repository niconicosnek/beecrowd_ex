#include <stdio.h>

int main()
{
    int n, vet[] = {100, 50, 20, 10, 5, 2, 1}, aux = 0;
    scanf("%d", &n);
    printf("%d\n", n);
    for (int i = 0; i < 7; i++)
    {
        aux = (n / vet[i]);
        n %= vet[i];
        printf("%d nota(s) de R$ %d,00\n", aux, vet[i]);
    }
    return 0;
}