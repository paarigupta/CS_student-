#include<stdio.h>
int main() 
{
   int array[3][5] = {{1,2,3,4,5},{2,5,8,9,4},{5,8,7,4,9}};
   int i, j;
   for( i=0 ; i<3 ; i++) 
   {
    for( j=0 ; j<5 ; j++) 
    {
      printf("%d\t", array[i][j]));
    } 
      printf("\n") ;
   }
     return 0;
  }
