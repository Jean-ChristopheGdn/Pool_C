#include "struct.h"
#include <stdio.h>
#include <stdlib.h>

void my_init(t_my_struct* point)
{
  point->id = 0;
  point->str = NULL;
}
/*
int main (int argc, char *argv[])
{
  t_my_struct *y;
  my_init(t_my_struct &y);
  printf("%d\n%d\n", t_my_struct.id, t_my_struct.str);
  return (0);
}
*/
