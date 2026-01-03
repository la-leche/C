#include <stdio.h>

int inputs[4][3] = {{1, 3, 2}, {0, -1, -100}, {23, 23, 22}, {-1, -2, -3}};

void process_inputs(int a, int b, int c)
{
    int n;
    if (a > b)
    {
        n = a;
        a = b;
        b = n;
    }
    if (b > c)
    {
        n = b;
        b = c;
        c = n;
    }
    if (a > b)
    {
        process_inputs(a, b, c);
    }
    else
    {
        printf("a: %d, b: %d, c: %d\n", a, b, c);
    }
}

int main()
{

    for (size_t i = 0; i < 4; i++)
    {
        process_inputs(inputs[i][0], inputs[i][1], inputs[i][2]);
    }

    return 0;
}