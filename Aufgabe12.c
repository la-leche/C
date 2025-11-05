#include <stdio.h>

double pow(double base, int exponent)
{
    double result = 0;
    if (exponent < 0)
    {
        result = base;
        for (int i = 0; i != exponent; i--)
        {
            result = result / base;
        }
    }
    else
    {
        result = 1;
        for (int i = 0; i < exponent; i++)
        {
            result = result * base;
        }
    }
    return result;
}

int main()
{

    // Variables initialization
    double a = 2.0;
    double b = 3.0;
    double c = 4.0E1;
    double p = 3.14;

    // Task A
    double resultA = 5 * a + 76 + 3.1;
    printf("Result of Task A: %.2f\n", resultA); //.2 => cut up 2 decimals

    // Task B

    double resultB = (a + 6) / (2 * p * a + (1 / a));
    printf("Result of Task B: %.2f\n", resultB);

    // Task C

    double resultC = a + ((b - (p / c)) / (a + (c / (a - (1 / b)))));
    printf("Result of Task B: %.3f\n", resultC); //.3 due to c=4.0E1 (e1 = 0.001)

    // Task D

    double resultD = pow((a * (-1)), 2);
    printf("Result of Task D: %.2f\n", resultD);

    // Task E

    double resultE = pow(a, -2);
    printf("Result of Task E: %.2f\n", resultE);

    return 0;
}