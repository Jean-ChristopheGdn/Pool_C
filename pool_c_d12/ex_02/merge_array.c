#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int *merge_array(int *arr1,int *arr2, int size1, int size2)
{
  int *new_array = NULL;
  int new_size = 0;
  new_size = size1 + size2;
  new_array = malloc(sizeof(int)* (new_size));

     for(int i = 0; i != size1; i++)
       {
	 new_array[i] = arr1[i];
       }
	 
     for (int j = size1; j <= new_size; j++)
	   {
	     int i = j - size1;
	 new_array[j] = arr2[i];
	   }
       
     /*	     for(int i = 0; i <= new_size; i++)
		       {
			 printf("%d,", new_array[i]);
			 }*/
		       
	 return (new_array);		       
}
/*
int main (int argc, char* argv[])
{
  int arr1[] = {1, 5, 10 ,3, 15, 12};
  int arr2[] = {3, 15, 7, 20};
  
  merge_array(arr1, arr2, 6, 3);
  
  return (0);
}
	 
*/
