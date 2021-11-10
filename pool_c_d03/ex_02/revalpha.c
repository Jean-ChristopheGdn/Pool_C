#include <unistd.h>

void my_putchar(char c)
 {
   write(1, &c, 1);
 }

void revalpha()
{
  char c;
  for (c = 90; c >= 65; c--)
    {
      my_putchar(c);
    }
  
      my_putchar('\n');
  
}
/*
int main()
{
  revalpha();
  return(0);
}
*/


