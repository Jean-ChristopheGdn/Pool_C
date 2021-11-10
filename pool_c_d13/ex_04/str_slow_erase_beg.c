#include <unistd.h>

void my_putchar(char c)
{
  write(1, &c, 1);
}

void my_putstr_slow_erase_beg(char *str)
{
int i = 0;
    while(str[i] != '\0')
    {
    my_putchar(str[i]);
    sleep(1);
        i++;
    }
    write(1,"\r", 1);   
    for(int i = 0; str[i] != '\0'; i++)
      {
	write(1," ",1);
	sleep(1);
      }
}


int main (int argc, char* argv[])
{
    if (argc == 2)
    {    
  my_putstr_slow_erase_beg(argv[1]);
    } 
  return (0);
}
