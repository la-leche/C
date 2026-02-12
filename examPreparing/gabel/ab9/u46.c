#include <stdio.h>
#include "advanced_console_output.h"
#include <time.h>

int main()
{
    int height = 0;
    int base = 0;

    // while (width < 2){
    printf("Bitte die gew¨unschte Baumgesamth¨ohe eingeben: ");
    scanf("%d", &height);
    // }

    printf("Bitte die H¨ohe des Stamms eingeben: ");
    scanf("%d", &base);

    if (height + base < base + 3)
    {
        return 0;
    }

    srand(time(NULL));

    int width = 1 + height * 2;

    // 1+0*2,1+1*2
    //  1   ,3    ,5,7,9, ... => n in N1 +2
    set_fg_color("green");
    for (size_t i = 0; i < height; i++)
    {
        // free space = (width - 1)/2 - shift(-1)
        int freeSpace = ((width - 1) / 2) - i;

        for (size_t j = 0; j < freeSpace; j++)
        {
            printf(" ");
        }
        // draw
        for (size_t x = 0; x < 1 + i * 2; x++)
        {
            rand() % (1 + i * 2) == 0 ? printf("o") : printf("*");
        }
        printf("\n");
    }

    // base
    set_fg_color("faintgray");
    int baseSpan = (width - 3) / 2;
    for (size_t j = 0; j < base; j++)
    {
        for (size_t i = 0; i < baseSpan; i++)
        {
            printf(" ");
        }
        printf("***\n");
    }

    return 0;
}