#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int is_in_line(int**table, int line, int value)
{
  for(int i = 0; i < 4; i++)
    {
      if ( table[line][i] == value)
	{
	  return (0);
	}
    }
  return (1);
}

int is_in_col(int**table, int column, int value)
{
    for(int i = 0; i < 4; i++)
    {
      if ( table[i][column] == value)
	{
	  return (0);
	}
    }
  return (1);
}
/*
int main (int argc, char* argv[])
{
  printf("hello\n");
  return (0);
}

*/
