#include <stdio.h>
#include <stdlib.h>

int main()
{
   double resultat = 0.0, nombre1 = 0.0, nombre2 = 0.0;



  printf("Entrez le nombre 1 : ");
  scanf("%lf", &nombre1);
  printf("Entrez le nombre 2 : ");
  scanf("%lf", &nombre2);



  resultat = nombre1 + nombre2;



  printf ("%f + %f = %f\n", nombre1, nombre2, resultat);

    return 0;
}
