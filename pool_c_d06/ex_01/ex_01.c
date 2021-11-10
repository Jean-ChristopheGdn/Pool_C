#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>


char *my_strcpy(char *destination, char *source)
{
  int i = 0;
  {
  while ( source[i] != '\0')
    {
      destination[i]= source[i];
      i++;
     
    }
 	 destination[i] = '\0';
  }	 
  return (destination);
}
/*
int main()
{
  char source[] = "Salut";
  char destination[] = "";
 
    
    printf(" La copie = %s\n", my_strcpy( destination, source));
    printf ("La copie = %s\n", destination);
  return (0);
}

*/
