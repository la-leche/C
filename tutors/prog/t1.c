#include <stdio.h>

int main()
{
    int bausparsumme = 0;

    while (bausparsumme < 5000)
    {
        printf("Geben Sie die Bausparsumme ein: ");
        scanf("%d", &bausparsumme);
    }

    int e = 0;

    while (e <= 0 || e > bausparsumme / 20)
    {
        printf("Wie viel zahlen Sie jährliche ein? Geben Sie ein: ");
        scanf("%d", &e);
    }

    int i = 1;
    double rem = 0;

    char *addition = "Bausparsumme ist zuteilungsreif!";

    do
    {
        rem = (rem + e) * 1.03;
        printf("Bausparguthaben nach %d Jahren: %.2f %s\n", i, rem, 2 * rem >= bausparsumme ? addition : "");

        if (rem >= bausparsumme)
        {
            printf("Bausparsumme erreicht!\n");
        }

        i++;

    } while (rem < bausparsumme);
}