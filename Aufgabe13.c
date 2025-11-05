#include <stdio.h>

void a(int _a, int _b)
{
    printf("%d + %d = %d\n", _a, _b, _a + _b);
    printf("%d - %d = %d\n", _a, _b, _a - _b);
    printf("%d * %d = %d\n", _a, _b, _a * _b);
    // printf("%d / %d = %d\n", _a, _b, _a / _b);
    printf("--------------------------\n");
}

void b(float _a, float _b)
{
    printf("%f + %f = %f\n", _a, _b, _a + _b);
    printf("%f - %f = %f\n", _a, _b, _a - _b);
    printf("%f * %f = %f\n", _a, _b, _a * _b);
    // printf("%f / %f = %f\n", _a, _b, _a / _b);
    printf("--------------------------\n");
}

void c(float _a, float _b)
{
    printf("%f + %f = %f\n", _a, _b, _a + _b);
    printf("%f - %f = %f\n", _a, _b, _a - _b);
    printf("%f * %f = %f\n", _a, _b, _a * _b);
    printf("%f / %f = %f\n", _a, _b, _a / _b);
    printf("--------------------------\n");
}

int main()
{
    a(2, 5);
    b(2, 5);
    c(2, 5);

    return 0;
}