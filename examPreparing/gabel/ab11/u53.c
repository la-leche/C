#include <stdio.h>
#include <math.h>
int main(void)
{
    double x = 2.0;
    while (x < 3.0) // < ,da !=3.0 schließt nut genau 3.0 aus. aber double kann 3.0 als 3.000...04 schreiben
    {
        printf("Die Quadratwurzel von %lf ist %lf\n", x, sqrt(x));
        x = x + 0.1;
    }
}
