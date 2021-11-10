#include <unistd.h>
#include <stdio.h>
#include <string.h>

int my_strcmp(char *str1, char*str2)
{
  int i = 0;
  do
    {
      if (str1[i] != str2[i])
	{
	  return (str1[i] - str2[i]);
	}
      i++;
    } while (str1[i] != '\0');
  return (0);
}       
/*        
int main(int argc, char *argv[])
{
  char str1[6] = "SALUT";
  char str2[6]= "SaALUT";
  my_strcmp(str1, str2);
  printf("%d\n", strcmp(str1, str2));
  printf("%d\n", my_strcmp(str1, str2));
  
 
  return (0);
}
*/
