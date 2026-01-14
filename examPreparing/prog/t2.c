#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <ctype.h>

#define NUMBER_OF_WORDS 20
#define WORTLAENGE 50

char wortfeld[NUMBER_OF_WORDS][WORTLAENGE] = {
    "HOCHSEEFRACHTER",
    "STUDIENORDNUNG",
    "FERNSEHEMPFANG",
    "HOFFNUNG",
    "BUNDESTAG",
    "TIEFDRUCKGEBIET",
    "EUROPAMEISTERSCHAFT",
    "GRUNDGESETZ",
    "INVERSIONSWETTERLAGE",
    "BAUMHAUS",
    "REGENSCHAUER",
    "BUNDESVERFASSUNGSGERICHT",
    "GRAUPELSCHAUER",
    "WASSERVERUNREINIGUNG",
    "KLIMAFORSCHUNG",
    "KOMMUNALWAHL",
    "LAGERREGAL",
    "VORLESUNGSVERZEICHNIS",
    "EUROPAPARLAMENT",
    "XYLOPHONSPIELERIN",
};

void ergaenze_buchstabe(char secret[], const char wort[], char buchstabe)
{
    buchstabe = toupper(buchstabe);
    for (size_t i = 0; i < strlen(wort); ++i)
    {
        if (toupper(wort[i]) == buchstabe)
        {
            secret[i] = toupper(wort[i]);
        }
    }
}

int main()
{

    srand(time(NULL));
    int word_index = rand() % NUMBER_OF_WORDS;
    printf("Cheat: %s\n", wortfeld[word_index]); // a)
    char *wort = wortfeld[word_index];
    size_t len = strlen(wort);

    char secret[len];

    for (size_t i = 0; i < len; ++i)
    {
        secret[i] = '-'; // b)
        secret[len] = '\0';
    }

    while (1)
    {
        printf("\nHalb: %s\n", secret);
        printf("1: Buchstabe, 2: Loesen? ");
        int wahl;
        scanf(" %d", &wahl);
        if (wahl == 1)
        {
            char input;
            printf("Buchstabe: ");
            scanf(" %c", &input);
            ergaenze_buchstabe(secret, wort, input);
        }
        else if (wahl == 2)
        {
            char loesung[len];
            scanf("%s", loesung);

            // uppercase
            for (size_t i = 0; i < strlen(loesung); i++)
            {
                loesung[i] = toupper(loesung[i]);
            }

            if (strcmp(loesung, wort) == 0)
            {
                int punkte = 0;
                for (size_t i = 0; i < len; ++i)
                {
                    if (secret[i] == '-')
                        punkte++;
                }
                printf("Das war richtig! Sie bekommen %d Punkte. Herzlichen Glueckwunsch!\n", punkte);
            }
            else
            {
                printf("Leider falsch. 0 Punkte. Richtig waere gewesen: %s\n", wort);
            }
            return 0;
        }
    }
    return 0;
}