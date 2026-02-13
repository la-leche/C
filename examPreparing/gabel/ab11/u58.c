#include <stdio.h>
#include "advanced_console_output.h"

int get_color_component(char arg)
{
    char color[6];
    switch (arg)
    {
    case 'R':
        strcpy(color, "red");
        break;
    case 'G':
        strcpy(color, "green");
        break;
    case 'B':
        strcpy(color, "blue");
        break;
    default:
        return 0;
    }

    set_fg_color(color);

    int wert = -1;

    while (wert < 0 || wert > 255)
    {
        scanf("%d", &wert);
    }
    return wert;
}

int main()
{
    int width = get_screen_width();
    clear();
    do
    {
        int r = get_color_component('R');
        int g = get_color_component('G');
        int b = get_color_component('B');

        set_bg_color_rgb(r, g, b);
        for (size_t i = 0; i < width / 3; i++)
        {
            printf(" ");
        }

        set_bg_color("default");
        set_color_rgb(0, r, g, b);
        for (size_t i = 0; i < width / 3; i++)
        {
            printf("%d", rand() % 10);
        }

        set_bg_color_rgb(r, g, b);
        for (size_t i = 0; i < width / 3; i++)
        {
            printf(" ");
        }
        set_bg_color("default");
        printf("\n");
    } while (1);

    return 0;
}