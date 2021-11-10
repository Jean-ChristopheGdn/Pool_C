#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#ifndef RUBIX_H
#define RUBIX_H

int my_putchar(char c)
{
  write(1,&c,1);
}

void my_putstr(char *str)
{
int i = 0;
    while(str[i] != '\0')
    {
    my_putchar(str[i]);
        i++;
    }
}

void my_putnbr(int n1)

{
  int k;
  long n = n1;
 
  if (n < 0)
    {
      my_putchar('-');
      n = n * (-1);
    }
    
  if (n >= 0)
  {
      if (n >= 10)
	{
	  k = (n % 10);
      n = (n - k) / 10;
	  my_putnbr(n);
	  my_putchar(48 + k);
     }
     
      else
        my_putchar(48 + n % 10);
   }
}

    


void free_tab(int **table)
{
  for (int i = 0; i < 4; i++)
    {
      free(table[i]);
    }
}

#endif

