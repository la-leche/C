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

// get real length
int secretLength = 0;
int foundChars = 0;

void ergaenze_buchstabe(char *r, char *h)
{
    char userChar;
    printf("Welcher Buchstabe soll ergänzt werden?");
    scanf(" %c", &userChar);
    // printf("%d", (int)userChar);
    if ((int)userChar < 65 || (int)userChar > 90)
    {
        printf("Das ist doch kein Buchstabe!\n");
        return;
    }

    for (size_t i = 0; i < secretLength; i++)
    {
        if (r[i] == userChar && r[i] != h[i])
        {
            h[i] = userChar;
            foundChars++;
        }
    }
    // return 0;
}

int main()
{
    srand(time(NULL));
    // create secret
    char secret[WORTLAENGE];
    strcpy(secret, wortfeld[rand() % NUMBER_OF_WORDS]);

    while (secret[secretLength])
    {
        secretLength++;
    }

    // prepare shown and fill with -
    char shownWord[secretLength + 1]; // due to \0
    for (size_t i = 0; i < secretLength; i++)
    {
        shownWord[i] = '-';
    }
    shownWord[secretLength] = '\0';

    // init input
    int choice;
    printf("%s\n", secret);
    do
    {

        printf("Aktueller Ratestand: %s\n", shownWord);
        printf("%ld\n", sizeof(shownWord));
        printf("Was wollen Sie tun: (1) Buchstaben ergänzen (2) Lösen:");
        scanf("%d", &choice);
        if (choice == 1)
        {
            ergaenze_buchstabe(secret, shownWord);
        }
        else if (choice == 2)
        {
            char userSolution[secretLength + 1];
            printf("Ok, dann versuchen Sie zu lösen: ");
            scanf("%s", userSolution);

            int points = secretLength - foundChars;
            int falseAnswer = 0;

            for (size_t i = 0; i < secretLength; i++)
            {
                if (secret[i] != userSolution[i])
                {
                    falseAnswer = 1;
                }
            }
            if (!falseAnswer)
            {
                printf("Das war richtig! Sie bekommen %d Punkte. Herzlichen Glückwunsch!", points);
            }
            else
            {
                printf("Leider falsch. 0 Punkte. Richtig wäre gewesen: %s\n", secret);
                break;
            }
        }
    } while (foundChars != secretLength);

    return 0;
} // needed 1 hour