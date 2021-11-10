#include <stdlib.h>
#include <stdio.h>

int fib_it(int nombre)
{
  if (nombre < 0)
    return (-1);
  else if ( nombre == 0)
    return (0);
  else
    {
      int a = 0, b = 1;
      while (nombre > 1)
      {
	int temp = a + b;
	a = b;
	b = temp;
	nombre--;
      }
    
    return(b);
    }
}
int main(int argc, char *argv[])
{
  int n = 0;
  printf("Entrez un nombre :\n");
  scanf("%d", &n);
  printf("Le résultat est : %d\n", fib_it(n));
	 
  return(0);
}
