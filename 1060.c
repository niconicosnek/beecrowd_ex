#include <stdio.h>

int main()
{
    float vet[6];
    int counter = 0;

    for (int i = 0; i < 6; i++)
    {
        scanf("%f", &vet[i]);
        if (vet[i] > 0)
        {
            counter += 1;
        }
    }
    printf("%d valores positivos\n", counter);
    return 0;
}