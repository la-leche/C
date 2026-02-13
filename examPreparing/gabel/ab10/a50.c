#include <stdio.h>

const float pi = 3.14;

void read_radius(double *radius)
{
    printf("Geben Sie Radius ein: ");
    scanf("%lf", radius);
}

void circle_circumference(double radius, double *circumference)
{
    // 2pi*r
    double res = (2 * pi * radius);
    *circumference = res;
}

void circle_area(double radius, double *area)
{
    // pi*r^2
    double res = (pi * pi * radius);
    *area = res;
}
void circle_circumference_and_area(double radius, double *circumference, double *area)
{
    *circumference = (2 * pi * radius);
    *area = (pi * pi * radius);
}

int main()
{
    double radius, circumference, area;

    read_radius(&radius);
    circle_circumference(radius, &circumference);
    circle_area(radius, &area);

    printf("%.2lf %.2lf %.2lf\n", radius, circumference, area);

    return 0;
}