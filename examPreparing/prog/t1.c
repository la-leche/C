#include <stdio.h>

const double epsilon = 1e-5;

int main()
{
    long double wallisProdukt = 1;
    int i = 2;
    while (wallisProdukt > epsilon)
    {
        float wi;
        if (i % 2 == 0)
        {
            wi = (float)(i * i) / ((i - 1) * (i + 1));
            wallisProdukt *= wi;
        }
        printf("i = %d, wallis_komp_i = %d/%d = %.7f --> pi ~ %.7Lf\n", i, i * i, (i - 1) * (i + 1), wi, wallisProdukt * 2.0);
        i += 2;
    }
}