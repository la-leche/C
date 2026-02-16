#include <stdio.h>
#include <ctype.h>

int main()
{

    //    n!=1*2*...*n

    int input;
    printf("Geben Sie eine positive ganze Zahl (<=12) ein: ");
    scanf("%d", &input);

    if (input > 12 || input <= 0)
    {
        printf("Keine korrekte Eingabe %d - Abbruch!\n", input);
        return 0;
    }

    int rem = 1;
    for (int i = 1; i <= input; i++)
    {
        rem *= i;
        printf("%d!= %d\n", i, rem);
    }

    return 0;
}