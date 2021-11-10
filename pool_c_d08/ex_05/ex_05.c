#include <stdlib.h>
#include <stdio.h>

int my_power_it(int nombre, int puissance)
{
  if (puissance == 0 )
    {
      return(1);
    }
  else if (puissance < 0)
    {
      return(0);
    }
  int resultat = 1;
   
  for (int i = 0; i < puissance; i++)
    {
      resultat = nombre*resultat;
    }
    
  return (resultat);
}
/*
int main (int argc, char *argv[])
{
  int n = 0, p = 0;
  printf("Entrez le nombre:\n");
  scanf("%d", &n);
  printf("Entrez la puissance :\n");
  scanf("%d", &p);
  
  printf("Le résultat est : %d\n", my_power_it(n,p));
  return (0);
}
*/
