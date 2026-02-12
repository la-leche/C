#include <stdio.h>

int main()
{

    float M = 0;
    while (M < 50)
    {
        printf("Geben Sie ihre monatliche Gebühr ein: ");
        scanf("%f", &M);
        if (M < 50)
        {
            printf("\nIhre monatliche Gebühr muss mindestens 50€ sein!\n");
        }
    }

    float s = 0;
    while (s == 0 || s > (M / 5))
    {
        printf("Geben Sie ihre Sparrate ein: ");
        scanf("%f", &s);
        if (s == 0)
        {
            printf("\nIhre Sparrate muss größer als 0€ sein!\n");
        }
        else if (s > (M / 5))
        {
            printf("\nIhre Sparrate muss maximal %.2f€ sein!\n", M / 5);
        }
    }

    float guthaben = 0;
    int cnt = 0;
    do
    {
        cnt++;
        guthaben = (guthaben * 1.02) + s;
        printf("Monat %d: %.2f\n", cnt, guthaben);

    } while (guthaben <= M);

    return 0;
}