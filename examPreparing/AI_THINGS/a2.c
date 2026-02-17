#include "advanced_console_output.h"
#include <stdio.h>

int main()
{
    // while (1)
    // {
    int H, W;
    get_screen_dimension(&W, &H);
    clear();
    // locate(0, 0);
    // set_bg_color("white");
    set_bg_color("red");
    for (size_t i = 1; i < W; i++)
    {
        locate(i, 1);
        printf(" ");

        locate(i, W - 1);
        printf(" ");
    }
    for (size_t i = 1; i <= H; i++)
    {
        locate(1, i);
        printf("  ");

        locate(W - 1, i);
        printf("  ");
    }

    set_text_blinking();
    set_text_bold();
    set_color(0, "red");
    char text[44] = "K L A U S U R E N P H A S E ! L E R N E N !";
    locate((W / 2) - 22, H / 2);
    printf("%s", text);

    locate(1, H);

    return 0;
}