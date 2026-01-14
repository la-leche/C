#include <stdio.h>

int main()
{

    char a[100];
    char b[100];

    int res = 0;

    int l1 = 0, l2 = 0;

    // 1. Einlesen
    printf("Bitte zwei Strings eingeben: ");
    scanf("%s %s", a, b);

    // l1 l2 = tatsächliche länge
    while (a[l1])
        l1++;

    while (b[l2])
        l2++;

    for (size_t i = 0; i <= l2 - l1; i++)
    {
        int r = 0;
        for (size_t j = 0; j < l1; j++)
        {
            if (b[i + j] == a[j])
            {
                r++;
            }
            else
            {
                break; // Buchstaben passen nicht? Abbrechen!
            }
        }
        if (r == l1)
        {
            res++;
        }
        printf("%d", r);

        return 0;
    }
}