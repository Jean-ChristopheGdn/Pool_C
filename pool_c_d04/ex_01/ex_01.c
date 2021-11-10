#include<stdio.h>
#include<unistd.h>

void my_swap(int *ptr_nb1, int *ptr_nb2)
{  
    int temp = *ptr_nb1;
    *ptr_nb1 = *ptr_nb2;
    *ptr_nb2 = temp;

}
/*
int main()
{
int nb1 = 42;
int nb2 = 21;
 printf("%d - %d\n", nb1, nb2);
 my_swap(&nb1, &nb2);
 printf("%d - %d\n", nb1, nb2);

return (0);
}
*/
