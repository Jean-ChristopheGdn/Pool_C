#include <unistd.h>

void my_putchar(char c)
{
  write(1, &c, 1);
}

void my_putstr_slow(char *str)
{
int i = 0;
    while(str[i] != '\0')
    {
    my_putchar(str[i]);
    sleep(1);
        i++;
    }
      
}

int my_strlen(char *str)
{
  int i = 0;
  while (str[i] != '\0')
    {
      i = i + 1;
    }
  return (i);
}

char *my_revstr_slow(char *str)
{
  int i = 0;
  char temp;
  int taille = (my_strlen(str) -1);
  while (i <= taille/2)
    {
      temp = str[i];
      str[i] = str[taille-i];
      str[taille-i] = temp;
      i = i + 1;
     
    }
  my_putstr_slow(str);
  return (str);
}



int main (int argc, char* argv[])
{
   if (argc == 2)
    {
  
  my_revstr_slow(argv[1]);
    } 
  return (0);
}
