#include <stdio.h>
#include <math.h>

typedef struct _point2d
{
    double x;
    double y;
} Point2D;

void PInput(Point2D *p)
{
    scanf("%f %f", p->x, p->y);
};
Point2D PAddP(Point2D a, Point2D b)
{
    Point2D result;
    result.x = a.x + b.x;
    result.y = a.y + b.y;
    return result;
};
Point2D PSubP(Point2D a, Point2D b)
{
    Point2D result;
    result.x = a.x - b.x;
    result.y = a.y - b.y;
    return result;
};
Point2D PScaleR(Point2D a, double f)
{
    Point2D result;
    result.x = a.x * f;
    result.y = a.y * f;
    return result;
};
double Pabs(Point2D a)
{
    double result = sqrt(a.x * a.x + a.y * a.y);
    return result;
};
double PscalarProduct(Point2D a, Point2D b)
{
    double result;
    result = a.x * b.x + a.y * b.y;
    return result;
};

int main()
{

    return 0;
}