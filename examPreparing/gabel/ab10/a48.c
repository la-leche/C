#include <stdio.h>

int checkStrings()
{
    char string1[100];
    char string2[100];

    scanf("%99s", string1);
    scanf("%99s", string2);

    // check eq
    // find real length
    // get smaller
    // look for pattern

    // check eq
    int equal = 1;
    int i = 0;

    while (string1[i] != '\0' || string2[i] != '\0')
    {
        if (string1[i] != string2[i])
        {
            equal = 0;
            break;
        }
        i++;
    }

    if (equal)
    {
        printf("gleich\n");
        return 0;
    }

    // find real length
    int str1size = 0;
    int str2size = 0;
    while (string1[str1size] != '\0')
    {
        str1size++;
    }
    while (string2[str2size] != '\0')
    {
        str2size++;
    }

    int cnt = 0;

    char *small;
    char *big;
    int smalLen, bigLen;
    if (str2size > str1size)
    {
        small = string1;
        big = string2;
        smalLen = str1size;
        bigLen = str2size;
    }
    else
    {
        small = string2;
        big = string1;
        smalLen = str2size;
        bigLen = str1size;
    }

    int count = 0;
    for (size_t i = 0; i < bigLen - smalLen; i++)
    {
        int match = 1;
        for (size_t j = 0; j < smalLen; j++)
        {
            if (big[i + j] != small[j])
            {
                match == 0;
                break;
            }
        }
        if (match)
        {
            count++;
        }
    }

    printf("%d", count);
}

int main()
{
    checkStrings();
    return 0;
}