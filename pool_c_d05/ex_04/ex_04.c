#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>


char my_strupcase(char *str)
{
  int i = 0;
  while ( str[i] != '\0')
    {
      if ( str[i] >= 97 && str[i] <= 122)
	{
	  str[i] = str[i] - 32;
	}
      i++;    
    }
  return ("str");
}

int main(int argc, char *argv)
{
  char str[6]= "hello";
    my_strupcase(str);
    printf("%d", my_strupcase(str));
  return (0);
}
