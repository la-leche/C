#include <stdio.h>
#include <stdlib.h>

int main()
{

    int input;

    int i = 0;
    int capacity = 1;

    int *arr = malloc(sizeof(int) * capacity);

    if (arr == NULL)
    {
        printf("Kein Platz!");
        return 0;
    }

    printf("Eingabe: ");
    scanf("%d", &input);

    while (input != -1)
    {
        if (i >= capacity)
        { // Voll? Erweitern!
            capacity *= 2;
            int *temp = realloc(arr, capacity * sizeof(int));
            if (temp == NULL)
            {
                printf("Kein Platz mehr!\n");
                free(arr);
                return 1;
            }
            arr = temp;
        }
        arr[i] = input; // Speichern
        i++;

        scanf("%d", &input);
    }

    // Ausgabe (optional zum Testen)
    printf("Eingabe (%d Zahlen):\n", i);
    for (int j = 0; j < i; j++)
    {
        printf("%d ", arr[j]);
    }
    printf("\n");

    free(arr);

    return 0;
}