#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    scanf("%d", &n);

    int arr1[n];
    double arr2[n];

    for (size_t i = 0; i < n; i++)
    {
        // 0,1,4,9
        arr1[i] = i * i;
        arr2[i] = sqrt(i);

        printf("%d %f\n", arr1[i], arr2[i]);
    }

    return 0;
}