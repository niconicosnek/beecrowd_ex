#include <stdio.h>

int main()
{
    double a, b, media, peso1 = 3.5, peso2 = 7.5;

    scanf("%lf%lf", &a, &b);
    media = ((peso1*a) + (peso2*b))/(peso1+peso2);
    printf("MEDIA = %.5lf\n", media);

    return 0;
}