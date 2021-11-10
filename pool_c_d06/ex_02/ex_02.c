#include <stdio.h>
#include <unistd.h>

void my_show_address(void *number)
{
  printf ("%p\n", (void*)number);
}
/*
int main()
{
  int adresse = 18;
  my_show_address(&adresse);

  return (0);
}
*/
