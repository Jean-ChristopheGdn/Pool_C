#include <unistd.h>


void my_putchar(char c)
{
  write(1, &c, 1);
}
void my_aff_comb2()
{
  int a, b, c, d;

    for(a=48; a<=57; a++)
    {
        for(b=a; b<=57; b++)
        {
            for(c=b; c<=57; c++) 
            {
	      for(d=c+1; d<=57; d++)
		{
	        my_putchar(a);
                my_putchar(b);
		my_putchar(' ');
                my_putchar(c);
		my_putchar(d);
		my_putchar(',');
		my_putchar(' ');
              
            }
        }
    }
  }
int main()
{
  my_aff_comb2();
  return (0);
}
