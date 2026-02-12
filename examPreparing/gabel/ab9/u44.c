#include <stdio.h>
char word[] = "asdako234kfao874f<dsj11llasd9as8kg%\"+asd90101jgj"; // 1 char = 1 byte => size of arr = length-1

int main()
{
    char input;
    scanf("%c", &input);

    for (int i = 0; i < sizeof(word); i++)
    {
        if (input == word[i])
        {
            printf("found at idx %d\n", i);
        }
    }

    return 0;
}