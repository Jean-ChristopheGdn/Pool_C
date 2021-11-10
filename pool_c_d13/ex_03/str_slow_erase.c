#include <unistd.h>

void my_putchar(char c)
{
  write(1, &c, 1);
}

void my_putstr_slow_erase(char *str)
{
int i = 0;
    while(str[i] != '\0')
    {
    my_putchar(str[i]);
    sleep(1);
        i++;
    }
    while (i > 0)
      {
	write(1,"\b \b", 3);
	sleep(1);
	i--;
      }
}


int main (int argc, char* argv[])
{
    if (argc == 2)
    {    
  my_putstr_slow_erase(argv[1]);
    }
  
  return (0);
}
