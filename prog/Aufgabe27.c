#include <stdio.h>

int main()
{
    int a;
    printf("Geben Sie eine ganze Zahl ein: ");
    scanf("%d", &a);

    if (a > 0)
    {
        int i, j;
        i = 0;
        while (i < a)
        {
            j = 0;

            while (j <= i)
            {
                printf("*");
                j++;
            }
            printf("\n");
            i++;
        }
    }

    return 0;
}
