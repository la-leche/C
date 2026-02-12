#include <stdio.h>

int askNumber(int *input)
{

    printf("Geben Sie die Zahl zum Berechnen des Fakultäts: ");
    scanf("%d", input);
};

int main()
{
    int input;
    askNumber(&input);

    if (input < 0 || input > 50)
    {
        printf("Die Zahl muss zwischen 0 und 50 liegen\n");
        scanf("%d", &input);
    }

    if (input == 0)
    {
        printf("%d\n", 1);
    }
    else
    {
        int res = 1;
        for (size_t i = 1; i <= input; i++)
        {
            res *= i;
        }
        printf("%d\n", res);
    }

    return 0;
}