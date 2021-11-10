#include <unistd.h>
#include <stdio.h>

void my_init(int *ptr)
{
  int i;
  i = 42;
  *ptr = i;
}
/*
int main()
{
int i;
i = 0;
my_init(&i);
 printf("%d\n", i);
 return (0);
}
*/
