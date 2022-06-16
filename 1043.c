#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a, b, c, area, per;

    scanf("%f%f%f", &a, &b, &c);

    if ((a + b) > c && (a + c) > b && (b + c) > a)
    {
        per = a + b + c;
        printf("Perimetro = %.1f\n", per);
    }
    else 
    {
        area = ((a + b) * c) / 2;
        printf("Area = %.1f\n", area);
    }
    return 0;
}