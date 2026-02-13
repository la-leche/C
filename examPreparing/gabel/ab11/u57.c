#include <stdio.h>
#include <math.h>

typedef struct Kraftstoffsorte
{
    int DIESEL;
    int SUPER;
    int SUPER_E10;
    int HYBRID;
    int ELEKTRO;
} kraftstoff_t;

typedef struct Antrieb
{
    int Vorderradantrieb;
    int Hinterradantrieb;
    int Allradantrieb;
} antrieb_t;

typedef struct _PKW
{
    char fabrikant[30];
    int Baujahr;
    int Hubraum;
    int Leistung;
    int tueren;
    kraftstoff_t kraftstoff;
    antrieb_t antrieb;
} PKW;

int main()
{
    PKW mein_auto;
    strcpy(mein_auto.fabrikant, "BMW");
    mein_auto.kraftstoff.DIESEL = 1;
    mein_auto.antrieb.Allradantrieb = 1;

    return 0;
}