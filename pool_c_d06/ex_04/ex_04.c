#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int str_len(char *chaine)
{
    int i = 0;
    while (chaine[i] != '\0')
      {
	i++;
     }
   return (i);
}


char *my_strup(char *chaine)
{
  int i = 0;
  
  char *str_cpy  = malloc(sizeof(char)* str_len(chaine) + 1);
  {
            for (int i = 0; chaine[i] != '\0'; i++ )
            {
                str_cpy[i] = chaine[i];
            }
	    str_cpy[i]='\0';
    }
    return (str_cpy);
}
/*    
int main()
{
    char *chaine = "Salut";
    char *str_cpy = my_strup(chaine);
  
       printf("%s\n", str_cpy);
   

    return 0;
}

*/    
