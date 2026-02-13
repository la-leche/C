#include <stdio.h>

int kgv(int m, int n)
{

    //      2  2  3  3  4  4  5  5
    // 90%n 45    15 5        1
    // 75%n       25          5  1

    int res = 1;
    int i = 2;
    while (m > 1 || n > 1)
    {
        int flag = 0;
        if (m % i == 0)
        {
            m /= i;
            flag = 1;
        }

        if (n % i == 0)
        {
            n /= i;
            flag = 1;
        }

        if (flag)
        {
            res *= i;
        }
        else
        {
            i++;
        }
    }
    return res;
}

int main()
{

    printf("%d\n", kgv(90, 75));
    printf("%d\n", kgv(442, 715));
    printf("%d\n", kgv(943, 1271));
    return 0;
}