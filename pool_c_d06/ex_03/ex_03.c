#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>


int *my_up(int nbr)
{
  int *array, i = 0;
  array = malloc (sizeof(int));
  array[0] = nbr;
  array[1] = nbr * 2;

  return (array);
}
/*
int main()
{
  int nombre = 5;
  int *resultat = my_up(nombre);
 
  printf("%d\n%d\n", resultat[0],resultat[1] );
    
  return (0);
}
*/
