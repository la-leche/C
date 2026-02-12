#include <stdio.h>

void print0()
{
    printf("Die drei Zahlen sind alle verschieden\n");
}

void print2(float wert)
{
    printf("Es gibt genau zwei gleiche Zahlen. Wert: %.2f\n", wert);
}

void print3(float wert)
{
    printf("Alle drei Zahlen sind gleich. Wert: %.2f\n", wert);
}

int main()
{

    float a, b, c;

    while (1)
    {
        printf("Geben Sie die drei Zahlen ein: \n");
        int res = scanf("%2f %2f %2f", &a, &b, &c);

        if (res != 3)
        {
            printf("Fehlerhafte Eingabe! Bitte nur Zahlen eingeben.\n");

            // Eingabepuffer leeren
            int ch;
            while ((ch = getchar()) != '\n' && ch != EOF)
            {
            }

            // Schleife geht weiter -> "neustarten"
            continue;
        }
        // none
        if (a - b != 0 && a - c != 0)
        {
            print0();
        }
        // a-b==0
        else if (a - b == 0)
        {
            b - c != 0 ? print2(a) : print3(a);
        }
        // a-c==0
        else if (a - c == 0)
        {
            b - c != 0 ? print2(a) : print3(a);
        }
        // b-c==0
        else if (b - c == 0)
        {
            b - a != 0 ? print2(b) : print3(b);
        }
    }
    return 0;
}

// 15 min