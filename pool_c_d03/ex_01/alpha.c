#include <unistd.h>

void my_putchar(char c)
 {
   write(1, &c, 1);
 }

void alpha()
{
  char c;
  for (c = 65; c <= 90; c++)
    {
      my_putchar(c);
    }
  
      my_putchar('\n');
  
}
/*
int main()
{
  alpha();
  return (0);
}
*/
