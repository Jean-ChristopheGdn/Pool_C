#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void print_unique(int * array, int size)
{
  int i = 0, j, k, compteur = 0;
  while (i < size)
    {
      j = 0;
      k = 0;
      while (j < size)
	{
	  if (array[i] == array[j])
	    {
	      k++;
	    }
	  j++;
	}
      if (k == 1)
	{
	  if(compteur > 0)
	    {
	      printf(",");
	    }
	  printf("%d", array[i]);
	  compteur++;
	}
     i++; 	
    }
  printf("\n");
}
/*
int main (int argc, char* argv[])
{
  int tab[] = {0, 0, 2, 3, 4, 3, 6, 1};
  print_unique(tab, 8);
  return (0);
}
*/
