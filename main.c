

/*Übungaprogramm einfacher Taschenrechner
FUMM / Mai 2022  */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    short Zahl1 = 2;
    short Zahl2 = 1;
    long resultat1 = Zahl1+Zahl2;
    long resultat2 = Zahl1-Zahl2;
    long resultat3 = Zahl1*Zahl2;
    long resultat4 = Zahl1/Zahl2;
    printf("Resultate:%\d",resultat1);
    printf("Resultate:%\d",resultat2);
    printf("Resultate:%\d",resultat3);
    printf("Resultate:%\d",resultat4);
    return 0;
}
