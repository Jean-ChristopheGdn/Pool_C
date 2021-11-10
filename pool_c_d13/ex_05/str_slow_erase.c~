#include <unistd.h>

void my_putchar(char c)
{
  write(1, &c, 1);
}
void my_putstr(char *str)
{
  int i = 0;
  while (str[i] != '\0')
    {
      my_putchar(str[i]);
      sleep(1);
      i++;
    }
}
void my_putstr1(char *str)
{
  int i = 0;
  while (str[i] != '\0')
    {
      my_putchar(str[i]);
      i++;
    }
}
int my_strlen(char *str)
{
  int i = 0;
  while (str[i] != '\0')
    {
      i++;
    }
  return (i);
}
void str_slow_erase_both(char *str)
{
  int length = my_strlen(str);
  int start = 0;
  my_putstr(str);

  for(int i = length - 1, start = 0; i >= (length / 2), start <= (length / 2); i--, start++)
    {
      str[i] = ' ';
      str[start] = ' ';
      write(1,"\r", 1);
      my_putstr1(str);
      sleep(1);
      
    }
}


int main (int argc, char* argv[])
{
  if (argc == 2)
    {
      str_slow_erase_both(argv[1]);
    }
  return (0);
}
