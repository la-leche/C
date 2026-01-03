#include <stdio.h>

// Protoypes
float quadratEinerFliesskommazahl(float x);
int quadratEinerGanzzahl(int n);
int summeDerErstenNNatuerlichenZahlen(int n);
void summeDerNatuerlichenZahlenVonMBisN(int m, int n);

// Function definitions
float quadratEinerFliesskommazahl(float x)
{

    return x * x;
}

int quadratEinerGanzzahl(int n)
{
    return n * n;
}

int summeDerErstenNNatuerlichenZahlen(int n)
{
    if (n < 0)
    {
        printf("Ungültige Eingabe. Es werden nur positive Zahlen akzeptiert.\n");
        return 0;
    }
    else
    {
        int sum = 0;
        for (int i = 0; i <= n; i++)
        {
            sum += i;
        }

        return sum;
    }
}

void summeDerNatuerlichenZahlenVonMBisN(int m, int n)
{
    if (m <= n)
    {

        int sum = 0;
        for (int i = m; i <= n; i++)
        {
            sum += i;
        }

        printf("%d", sum);
    }
    else if (m > n)
    {
        printf("Ungültige Eingabe: m sollte kleiner oder gleich n sein.\n");
    }
    else
    {
        printf("Ungültige Eingabe. Es werden nur positive Zahlen akzeptiert.\n");
    }
}

int main()
{
    printf("summeDerErstenNNatuerlichenZahlen(5) = %d\n", summeDerErstenNNatuerlichenZahlen(2));
    printf("quadratEinerGanzzahl(5) = %d\n", quadratEinerGanzzahl(5));
    printf("quadratEinerFliesskommazahl(5.0) = %.2f\n", quadratEinerFliesskommazahl(5.0));
    printf("summeDerNatuerlichenZahlenVonMBisN(3, 7) = ");
    summeDerNatuerlichenZahlenVonMBisN(3, 7);

    printf("summeDerErstenNNatuerlichenZahlen(-5) = %d\n", summeDerErstenNNatuerlichenZahlen(-2));
    printf("quadratEinerGanzzahl(-5) = %d\n", quadratEinerGanzzahl(-5));
    printf("quadratEinerFliesskommazahl(-5.0) = %.2f\n", quadratEinerFliesskommazahl(-5.0));
    printf("summeDerNatuerlichenZahlenVonMBisN(-3, -7) = ");
    summeDerNatuerlichenZahlenVonMBisN(-3, -7);

    return 0;
}