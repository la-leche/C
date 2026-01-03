#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    srand(time(NULL));

    int i = 0;

    while (i != 10)
    {
        int res = (rand() % (126 - 32)) + 32;
        printf("%c\n", (char)res);
        fflush(stdout);
        /* code */
        i++;
    }

    return 0;
}
