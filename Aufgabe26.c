// #include <stdio.h>

// char toLowerManual(char c)
// //     Großbuchstaben A–Z haben ASCII-Werte 65–90.
// //     Kleinbuchstaben a–z haben 97–122
// {
//     if (c >= 'A' && c <= 'Z')
//         return c + 32;
//     return c;
// }

// int main()
// {
//     struct Element
//     {
//         char symbol[1];
//         char name[50];
//     };

//     struct Element elements[6] =
//         {
//             {"s", "schwefel"},
//             {"o", "sauerstoff"},
//             {"h", "wasserstoff"},
//             {"c", "kohlenstoff"},
//             {"n", "stickstoff"},
//             {"u", "Uranium"}};

//     // ALT SOLUTION
//     // char *symbols[] = {"s", "o", "h", "c", "n"};
//     // char *names[] = {"schwefel", "sauerstoff", "wasserstoff", "kohlenstoff", "stickstoff"};

//     char c[1];
//     printf("Geben Sie den Zeichen des Elements ein: ");
//     scanf("%1s", c);
//     c[0] = toLowerManual(c[0]);

//     for (size_t i = 0; i < 6; i++)
//     {
//         if (c[0] == elements[i].symbol[0])
//         {
//             printf("%s\n", elements[i].name);
//             return 0;
//         }
//     }

//     printf("Element nicht gefunden.\n");
//     return 0;

//     return 0;
// }

#include <stdio.h>

char toLowerManual(char c)
{
    if (c >= 'A' && c <= 'Z')
        return c + 32;
    return c;
}

struct Element
{
    char symbol[2]; // zeichen + 0
    char name[50];
};

int main()
{
    struct Element elements[6] =
        {
            {"s", "schwefel"},
            {"o", "sauerstoff"},
            {"h", "wasserstoff"},
            {"c", "kohlenstoff"},
            {"n", "stickstoff"},
            {"u", "uran"}};

    char c[2]; // 1 Zeichen + 0

    while (1)
    {
        printf("Geben Sie das Zeichen des Elements ein (0 zum Beenden): ");
        scanf("%1s", c);

        // Prüfen ob Benutzer beendet
        if (c[0] == '0')
        {
            printf("Programm beendet.\n");
            break;
        }

        // Kleinbuchstabe machen
        c[0] = toLowerManual(c[0]);

        int gefunden = 0;
        for (int i = 0; i < 6; i++)
        {
            if (c[0] == elements[i].symbol[0])
            {
                printf("%s\n", elements[i].name);
                gefunden = 1;
                break;
            }
        }

        if (!gefunden)
        {
            printf("Element nicht gefunden.\n");
        }
    }

    return 0;
}
