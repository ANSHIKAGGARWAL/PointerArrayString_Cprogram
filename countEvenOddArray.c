/*Program to count the even and odd numbers in a array*/

#include<stdio.h>
#define SIZE 10
void main( )
{
  int arr [SIZE],i,even=O,odd=O;
  for(i=O;i<SIZE;i++)
  {
    printf ("Enter the value for arr[%d]",i);
    scanf("%d",&arr[i]);

      if(arr[i]%2==0)
      even++;
      else
      odd++;
   }
  printf("Total Even numbers are %d \t Total Odd numbers are %d\n", even, odd );
}
