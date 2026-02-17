#include <stdio.h>
// #include <ctype.h>

int main()
{

    char wort1[31] = "Hammer";
    char wort2[31] = "mahmer";

    int wort1length = 0;
    int wort2length = 0;
    while (wort1[wort1length])
        wort1length++;

    while (wort2[wort2length])
        wort2length++;

    // for (size_t i = 0; i < 30; i++)
    // {
    //     wort1[i] = tolower(wort1[i]);
    //     wort2[i] = tolower(wort2[i]);
    // }

    for (int i = 0; i < (wort1length > wort2length ? wort1length : wort2length); i++)
    {
        if ((wort1[i] > 64) && (wort1[i] < 91)) // uppercase A-Z = 65-90
            wort1[i] ^= 0x20;                   // 2^5 flip => 0->1

        if ((wort2[i] > 64) && (wort2[i] < 91))
            wort2[i] ^= 0x20;
    }

    printf("wort1: ");
    for (size_t i = 0; i < 30; i++)
    {
        printf("%c", wort1[i]);
    }

    printf("\nwort2: ");
    for (size_t i = 0; i < 30; i++)
    {
        printf("%c", wort2[i]);
    }
    printf("\n");

    if (wort1length == wort2length)
    {
        int same = 0;
        for (int i = 0; i < wort1length; i++)
        {
            for (int j = 0; j < wort2length; j++)
            {
                if (wort1[i] == wort2[j])
                {
                    same++;
                    break;
                }
            }
        }
        if (same == wort1length)
        {
            printf("Anagramme\n");
        }
        // printf("%d %d %d", same, wort1length, wort2length);
    }
    else
    {
        printf("Keine Anagramme\n");
    }

    return 0;
}