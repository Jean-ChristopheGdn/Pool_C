#include <stdlib.h>
#include <stdio.h>

int fib_it(int nombre)
{
  int resultat = 0;
  if (nombre < 0)
    return (-1);
  else if (nombre < 2)
    return (nombre);
  else
    resultat = fib_it(nombre - 1 )+ fib_it(nombre - 2);
  return (resultat);
}
/*
int main(int argc, char *argv[])
{
  int n = 0;
  printf("Entrez un nombre :\n");
  scanf("%d", &n);
  printf("Le résultat est : %d\n", fib_it(n));
	 
  return(0);
}
*/
