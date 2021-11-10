#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int **pascal_tr(int size)
{
  int **array = malloc(sizeof(int*)* size);

  for (int i = 0; i < size; i++)
    {
      array[i] = malloc (sizeof(int) * (i+1));
      for (int j = 0; j <= i; j++)
	{
	  if (j == i || j == 0)
	    {
	      array[i][j] = 1;
	    }
	  else
	    {
	  array[i][j] = array[i-1][j] + array[i-1][j-1];
	    }
	}
     
    }
  for (int i = 0; i < size; i++)
    {
      for (int j = 0; j < i+1;j++)
	{
	  printf("%d", array[i][j]);
	}
      printf("\n");
      }
}

int main (int argc, char* argv[])
{

  pascal_tr(20);
  return (0);
}

