#include <stdio.h>

#define CACH 4;
#define XSAL 4.50;
#define XBACON 5;
#define TORRADA 2;
#define REFRI 1.50;

int main()
{
    int cod, qt;
    scanf("%d", &cod);

    switch(cod)
    {
        case 1:
        {
            scanf("%d", &qt);
            float val = ((float) qt)*CACH;
            printf("Total: R$ %.2f\n", val);
            break;
        }
        case 2:
        {
            scanf("%d", &qt);
            float val = ((float) qt)*XSAL;
            printf("Total: R$ %.2f\n", val);
            break;
        }
        case 3:
        {
            scanf("%d", &qt);
            float val = ((float) qt)*XBACON;
            printf("Total: R$ %.2f\n", val);
            break;
        }
        case 4:
        {
            scanf("%d", &qt);
            float val = ((float) qt)*TORRADA;
            printf("Total: R$ %.2f\n", val);
            break;
        }
        case 5:
        {
            scanf("%d", &qt);
            float val = ((float) qt)*REFRI;
            printf("Total: R$ %.2f\n", val);
            break;
        }
    }
    return 0;
}