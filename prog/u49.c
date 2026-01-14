#include <stdio.h>

int main()
{

    int a = 1;
    int b = 2;

    int *j = &a;
    int *i = &b;

    int val_i = *i; // Holt die 2
    int val_j = *j; // Holt die 1

    printf("%d + %d = %d\n", val_i, val_j, val_i + val_j);
    printf("%d - %d = %d\n", val_i, val_j, val_i - val_j);
    printf("%d * %d = %d\n", val_i, val_j, val_i * val_j);
    printf("%d / %d = %d\n", val_i, val_j, val_i / val_j);

    return 0;
}