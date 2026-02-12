#include <stdio.h>

int powIt(int x, int n)
{

    int res = x;
    for (int i = 0; i < n; i++)
    {
        res *= x;
    }

    return res;
}

int powRec(int x, int n)
{
    if (n != 0)
    {
        return x * powRec(x, n - 1);
    }
    else
    {
        return x;
    }
}

int sumIt(int x, int y)
{
    for (size_t i = 0; i < y; i++)
    {
        x++;
    }
    return x;
}
int i = 0;
int sumRec(int x, int y)
{
    if (i != y)
    {
        x++;
        i++;
        return sumRec(x, y);
    }
    else
    {
        return x;
    }
}

int main()
{
    int x, y;
    printf("Geben Sie die Zahl X und Exponente Y ein:");
    scanf("%d %d", &x, &y);
    printf("%d, %d\n", powIt(x, y), powRec(x, y));
    printf("%d, %d\n", sumIt(x, y), sumRec(x, y));

    return 0;
}