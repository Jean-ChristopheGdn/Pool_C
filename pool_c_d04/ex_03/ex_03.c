#include <unistd.h>

int my_strlen(char *str)
{
  int i = 0;
  while (str[i] != '\0')
    {
     i++;
    }
  return (i);
}
/*
int main()
{
  return (my_strlen("GECKOS"));
}
*/
