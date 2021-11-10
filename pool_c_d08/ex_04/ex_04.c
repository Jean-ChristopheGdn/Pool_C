#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "struct.h"
#include "abs.h"

void my_init(t_my_struct *a, int b, const char* c)
{
  if ( a == NULL)
    {
      return (0);
    }
  a -> id =  MY_ABS(b);
  a -> str = strdup(c);
   
}
/*
int main(int argc, char *argv[])
{
  
  return(0);
}
*/
