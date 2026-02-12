#include <stdio.h>

int feld[10];

void ausgabe()
{
    for (int i = 0; i < 10; i++)
    {
        printf("Element Ix%d: %d\n", i, feld[i]);
    }
}

void invert()
{
    printf("---------INVERTIEREN---------");
    for (int i = 0; i < 10; i++)
    {
        feld[i] = (__u_int)-feld[i];
    }
}

int summe()
{

    int res = 0;
    for (int i = 0; i < 10; i++)
    {
        res += feld[i];
    }
    return res;
}

int main()
{
    for (int i = 0; i < 10; i++)
    {
        printf("Geben Sie die Zahl Nummer %d ein: ", i + 1);
        scanf("%d", &feld[i]);
    }
    ausgabe();
    printf("Summe: %d\n", summe());
    invert();
    printf("Summe: %d\n", summe());

    return 0;
}