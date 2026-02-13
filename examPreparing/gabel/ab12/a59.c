#include <stdio.h>
#include <stdlib.h>

void bubblesort(int anz, int f[])
{
    int flag;

    do
    {
        flag = 0;
        for (int i = 1; i < anz; i++)
        {
            if (f[i] < f[i - 1])
            {
                int rem = f[i];
                f[i] = f[i - 1];
                f[i - 1] = rem;
                flag = 1;
            }
        }
        anz--;
    } while (flag);
}

int main()
{

    int count;
    printf("Wie viele Elemente sollen eingelesen werden? ");
    scanf("%d", &count);

    int *store = malloc(count * sizeof(int));

    for (size_t i = 0; i < count; i++)
    {
        printf("Geben Sie Element Nummer %d: ", i + 1);
        scanf("%d", store + i);
    }
    bubblesort(count, store);

    for (size_t i = 0; i < count; i++)
    {
        printf("Element Nummer %d: %d\n", i + 1, store[i]);
    }

    return 0;
}