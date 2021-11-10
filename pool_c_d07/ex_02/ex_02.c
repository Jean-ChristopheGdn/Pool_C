#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
 
  if (argc < 2)
    {
     printf("Error.\n");
     return (0);
    }
      int nombre = atoi( argv[1]);
        if (nombre > 0 )
        {
	 
           for(int i = 1; i <= nombre ; i++)
           {
            printf("Hello\n");
     
           }
         }
  
        else
        {
          printf("Error.\n");
        }
 

  return (0);
}
