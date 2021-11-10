#include <unistd.h>
#include <stdlib.h>
#include "proto.h"

void tete(int size);

void tree(int size)
{
    
  if (size < 1)
    {
      return;
    }
  
  int nombre_ligne = size + 3, bloc = 1;
  

        for (int i = 0; i < nombre_ligne; i++)
	{
	  
	  for(int espace = (nombre_ligne - i)-1; espace > 0; espace--)
	    {
	      write(1," ",1 );
	    }	  
	       for(int etoiles = (2*i)+1; etoiles > 0; etoiles--)
		 {
	         write(1,"*", 1);
		 }
	     write(1,"\n",1); 
	 }
	/*	while ( bloc < size)
	  {
	    nombre_ligne++;
	    bloc ++;
	    for (int i = 4; i <= nombre_ligne; i++)
	      {
		for (int espace = (nombre_ligne- i)- 1  ; espace > 0; espace--)
		  {
		    write(1," ",1);
		  }
		for (int etoiles = (2*i)+1; etoiles  > 0; etoiles--)
		  {
		    write(1,"*",1);
		  }
		write(1," ",1);
		write(1,"\n",1);
	      }
	      }*/
	if (bloc == size )
	  {
	    for (int espace = (nombre_ligne-1); espace > 0 ; espace--)
	      {
		write(1," ",1);
	      }	   
	     
	    write(1,"|",1);
	      
	    write(1,"\n",1);
	  }
}
