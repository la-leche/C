#include <stdio.h>

int main()
{
    char name[50];
    printf("Geben Sie Ihren Namen ein: ");
    scanf("%50s", name);

    for (size_t i = 0; i < 24; i++)
    {
        printf("Hallo, %s!\n", name);
    }

    return 0;
}