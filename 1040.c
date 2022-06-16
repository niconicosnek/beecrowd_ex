#include <stdio.h>

#define PESO1 2
#define PESO2 3
#define PESO3 4
#define PESO4 1

int main()
{
    double n1, n2, n3, n4, rec, med, medf;

    scanf("%lf%lf%lf%lf", &n1, &n2, &n3, &n4);

    med = ((PESO1 * n1) + (PESO2 * n2) + (PESO3 * n3) + (PESO4 * n4))/(PESO1 + PESO2 + PESO3 + PESO4);

    if (med >= 7)
    {
        printf("Media: %.1lf\n", med);
        printf("Aluno aprovado.\n");
    }
    if (med < 7 && med >= 5)
    {
        scanf("%lf", &rec);
        printf("Media: %.1lf\n", med);
        printf("Aluno em exame.\n");
        printf("Nota do exame: %.1lf\n", rec);
        medf = (rec + med)/2;
        if (medf >= 5)
        {
            printf("Aluno aprovado.\n");
        }
        else
        {
            printf("Aluno reprovado.\n");
        }
        printf("Media final: %.1lf\n", medf);
    }
    if (med < 5)
    {
        printf("Media: %.1lf\n", med);
        printf("Aluno reprovado.\n");
    }
    return 0;
}