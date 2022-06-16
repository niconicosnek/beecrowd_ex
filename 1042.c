#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void selectionSort(int vet[], int size)
{
    for (int i = 0; i < size; i++)
    {
        int min_ind = i;
        for (int j = i + 1; j < size; j++)
        {
            if (vet[j] < vet[min_ind])
            {
                min_ind = j;
            }
        }
        swap(&vet[min_ind], &vet[i]);
    }
}

int main()
{
    int vet[3] = {0}, vet2[3];
    int size = 3;
    
    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &vet[i]);
        vet2[i] = vet[i];
    }
    selectionSort(vet, size);
    for (int i = 0; i < 3; i++)
    {
        printf("%d\n", vet[i]);
    }
    printf("\n");
    for (int i = 0; i < 3; i++)
    {
        printf("%d\n", vet2[i]);
    }
    return 0;
}