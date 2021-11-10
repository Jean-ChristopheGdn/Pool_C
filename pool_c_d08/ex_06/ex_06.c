#include <stdlib.h>
#include <stdio.h>

int my_power_rec(int nombre, int puissance)
{
  int resultat = 0;
  if (puissance == 0)
    return (1);
  else
    resultat = nombre * my_power_rec(nombre, puissance - 1);
    return (resultat);
}
/*
int main (int argc, char *argv[])
{
  int nombre = 0, puissance = 0;
  printf("Ecrivez un nombre :\n");
  scanf("%d", &nombre);
  printf("Ecrivez la puissance :\n");
  scanf("%d", &puissance);
  printf("Le résultat est : %d\n", my_power_rec(nombre, puissance));
  return (0);
}
*/
