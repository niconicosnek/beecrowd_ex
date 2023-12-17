#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n;

    scanf("%d", &n);

    int *arr = (int *)malloc(n * sizeof(int));
    int *soma = (int *)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        soma[i] = 0;
        for (int j = 1; j < arr[i]; j++) //j = 1 se não ocorreria uma divisão por 0.
        {
            if(arr[i] % j == 0)
            {
                soma[i] += j;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (soma[i] == arr[i])
        {
            printf("%d eh perfeito\n", arr[i]);
        }
        else 
        {
            printf("%d nao eh perfeito\n", arr[i]);
        }
    }

    

    return 0;
}