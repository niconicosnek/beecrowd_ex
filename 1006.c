#include <stdio.h>

int main()
{
    double a, b, c, media, pesoa = 2, pesob = 3, pesoc = 5;

    scanf("%lf%lf%lf", &a, &b, &c);
    media = ((pesoa*a) + (pesob*b) + (pesoc*c))/(pesoa + pesob + pesoc);
    printf("MEDIA = %.1lf\n", media);

    return 0;
}