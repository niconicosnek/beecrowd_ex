#include <stdio.h>

int main()
{
    float h, vm, d, comb = 12;

    scanf("%f%f", &h, &vm);
    d = h*vm;
    printf("%.3f\n",  d/ comb);

    return 0;
}