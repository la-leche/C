#include <stdio.h>
#include "advanced_console_output.h"

float get_value(char parteiname[], float precentages[])
{
    float input = 0;
    float sum = 0;
    printf("Geben Sie den Wert für %s: ", parteiname);
    scanf("%f", &input);

    sum = input;
    for (size_t i = 0; i < precentages[6]; i++)
    {
        sum += precentages[i];
    }
    printf("%f\n", sum);

    if (input < 0.0 || input > 100.0 || sum > 100.0)
    {

        printf("Sie haben falschen Wert angegeben\n");
        get_value(parteiname, precentages);
    }
    return input;
}

int main()
{
    int w = get_screen_width();
    int h = get_screen_height();
    locate(1, 1);

    char party_names[6][7] = {"CDU",
                              "Grüne",
                              "SPD",
                              "AfD",
                              "Linke",
                              "FDP"};
    char party_colors[6][10] = {"black", "green", "red", "blue",
                                "magenta", "yellow"};
    float party_percentages[6] = {0, 0, 0, 0, 0, 0};

    for (size_t i = 0; i < 6; i++)
    {
        party_percentages[i] = get_value(party_names[i], party_percentages);
    }

    clear();
    locate(0, 0);
    printf("ERGEBNISS DER EUROPAWAHL\n\n\n");

    for (size_t i = 0; i < 6; i++)
    {
        printf("%s", party_names[i]);
        locate(7, 4 + i);
        set_bg_color(party_colors[i]);
        // Balken: SKALIERT auf 20 max!
        int scale = (int)(party_percentages[i]);

        for (int i = 0; i < scale; i++)
        {
            // printf("%.2f", party_percentages[i]);
            printf(" ");
        }
        set_bg_color("default");
        locate(scale + 8, 4 + i);
        printf("%.2f\n", party_percentages[i]);
    }

    return 0;
}