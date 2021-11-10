#include <stdlib.h>

int	my_getnbr(char *str)
{
  int	var;
  int	inv;
  int	i;

  inv = 1;
  var = 0;
  i = 0;
  
  
  if (str == NULL)
    return (0);
	
  while ((*str < 47 || *str > 58) && *str != 0)
    {
      str = str + 1;
      i = i + 1;
    }
    
  if (i > 0 && *(str - 1) == 45)
      inv = -1;
      
  while (*str != 0 && *str >= '0' && *str <= '9')
    {
      var = var * 10;
      var = var + *str - 48;
      str = str + 1;
      
    }

  var = var * inv;
  if (var > 214748364){
	return (0);}
  if (var == 214748364){
	return (0);}
  if (var < -214748364){
  return (0);}
  else{
  return (var);}
}

/*
int main()
{
  printf("\"%s\" returns %d\n","-42", my_getnbr("-42"));
  printf("\"%s\" returns %d\n","+--+-++--+--+--+-42", my_getnbr("+--+-++--+--+--+-42"));
  printf("\%s\" returns %d\n", "42a43", my_getnbr("42a43"));
  printf("\"%s\" returns %d\n","-a-a42", my_getnbr("-a-a42"));
  printf("\%s\" returns %d because this number doesn't fit in an integer.\n","1100000000000000000042", mygetnbr("1100000000000000000042"));
  printf("\"%s\" returns %d for the same reason. \n", my_getnbr("-1000000000000000000042"));

return (0);
}
*/
