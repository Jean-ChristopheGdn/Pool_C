#include <unistd.h>
#include <stdio.h>

int  my_sort_int_tab(int *tab, int size)
{
  int temp, i, j;
  for ( i = 0; i < size; i++)
    {
      for (j = i; j < size; j++)
	{
	  if (tab[i] > tab[j])
	    {
	    temp = tab[i];
	    tab[i] = tab[j];
	    tab[j] = temp;
	    }
	}
    }
  
}
/*
int main(int argc, char *argv[])
{
  int tab[5] ={10,50,21,35,8};
  
  my_sort_int_tab(tab, 5);
  for (int i = 0; i < 5; i++)
    {
      printf("%d\n", tab[i]);
    } 
  return (0);
}
*/

