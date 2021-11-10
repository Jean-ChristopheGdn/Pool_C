#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

int main(int argc, char *argv[])
{
  if (argc =! 2)
    {
      write(1,"Error.\n", 7);
    }
 
  int fichier = 0, size = 0;
  char buffer[4096];
  
  fichier = open(argv[1], O_RDONLY);
  if(fichier < 0)
    {
      write(1,"Error.\n", 7);
    }
  else
    {
    size = read(fichier, buffer, 4096);
    buffer[size] = 0;
    write(1,buffer, size);
    }

      close(fichier);
      return (0);   
}
