#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
  if (argc < 3)
    {
      write(1,"Error.\n", 7);
      return (0);
    }
 
  int fichier = 0;
  fichier = open(argv[1],O_CREAT | O_WRONLY | O_TRUNC, 0777);
  if(fichier < 0)
    {
      write(1,"Error.\n", 7);
    }
  else
    
    for (int a = 2; argv[a]; a++)
      {
	for (int b = 0 ; argv[a][b]; b++)
	{
	  write(fichier,&argv[a][b], 1);
	}
	write(fichier,"\n", 1);
      }
 

      close(fichier);
      return (0);   
}
 
