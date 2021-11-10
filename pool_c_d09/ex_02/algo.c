#include <stdio.h>
#include <stdlib.h>
#include "rubiks.h"
/*int my_putchar(char c);

void my_putstr(char *str);

void my_putnbr(int n1);

void free_tab(int **table);
void print_tab(int **table)
{
  
 for (int i = 0; i < 4; i++)
     {
     my_putstr("-----------------\n|");
        for ( int j = 0; j < 4; j++)
        {
	     my_putstr(" ");
	     my_putnbr(table[i][j]);
	     my_putstr(" ");
	       my_putstr("|");
	     
	if ( j == 3)
	  {
	    my_putstr("\n");
	  }
         }
       }
	 my_putstr("-----------------\n\n");
       
}
*/
void algo_line(int **table, int line)
{
    int temp = table[line][0];
 
  for (int j = 0 ; j < 4; j++) 
    {
  table[line][j]= table[line][j+1];
    }
  table[line][3] = temp;
}

void algo_column(int**table, int column)
{
  int i = 1;
  int temp = table[0][column];
  
    while ( i < 3) 
    {
  table[i-1][column] = table[i][column];
  i++;
    }
      table[3][column] = temp;
}

void algo_square(int**table, int square)
{
  switch (square)
    {
      int temp, temp1, temp2, temp3;
    case 0 :
      temp =  table[0][0];
      temp1 = table[0][1];
      temp2 = table[1][1];
      temp3 = table[1][0];
      table[0][0] = temp3;
      table[0][1] = temp;
      table[1][1] = temp1;
      table[1][0] = temp2;
      break;
    case 1 :
      temp =  table[0][2];
      temp1 = table[0][3];
      temp2 = table[1][3];
      temp3 = table[1][2];
      table[0][2] = temp3;
      table[0][3] = temp;
      table[1][3] = temp1;
      table[1][2] = temp2;
      break;
    case 2 :
      temp =  table[2][2];
      temp1 = table[2][3];
      temp2 = table[3][3];
      temp3 = table[3][2];
      table[2][2] = temp3; 
      table[2][3] = temp;
      table[3][3] = temp1;
      table[3][2] = temp2;
      break;
    case 3 :
      temp =  table[2][2];
      temp1 = table[2][3];
      temp2 = table[3][3];
      temp3 = table[3][2];
      table[2][2] = temp3;
      table[2][3] = temp;
      table[3][3] = temp1;
      table[3][2] = temp2;
      break;
    default :
      break;
    }
}
/*
int main (int argc, char* argv[])
{
     int **tab = malloc(sizeof(int*) * 4);
    for (int k = 0; k < 4; k++)
      {
	tab[k] = malloc(sizeof(int) * 4);
      }
  for (int i = 0; i < 4; i++)
    {
      for (int j = 0; j < 4; j++)
	{
	  tab[i][j]=0;
	}
    }
  for (int i = 0; i < 2; i++)
      {
    tab[i][0] = 0;
    tab[i][1] = 0;
    tab[i][2] = 1;
    tab[i][3] = 1;
      }
    for(int i = 2; i < 4; i++)
      {
	tab[i][0] = 2;
	tab[i][1] = 2;
	tab[i][2] = 3;
	tab[i][3] = 3;
	} 
     algo_line(tab, 0);
     print_tab(tab); 
     algo_column(tab, 0);
	     print_tab(tab);
	     algo_square(tab, 3);
	       print_tab(tab);
	     free_tab(tab);
  
  return (0);
}
*/
