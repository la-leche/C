#include <stdio.h>

int main()
{

    int n, sum;

    scanf("%d", &n);
    sum = 0;

    do            // (4)
    {             // (5)
        sum += n; // (6)
        n--;      // (7)
        printf("n: %d\n", n);
    } while ((n > -3));

    return 0;
}