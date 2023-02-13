/* PROGRAM TO PRINT ARRAY IN REVERSE ORDER
eg 12345 
output 54321    */

#include<stdio.h>
int main()
{
  int test_cases,array[50];
  printf("Enter the number of test cases\n");
  scanf("%d",&test_cases);
  while(test_cases--)
{
    int number,i;
  printf("\nREAD THE VALUES IN AN ARRAY AND DISPLAY IT IN REVERSE ORDER\n");
   printf("INPUT THE NUMBERS OF ELEMENTS TO STORE IN THE ARRAY\n");
  scanf("%d",&number);
  for(i=0;i<number;i++)
  {
      scanf("%d",&array[i]);
  }
  printf("\t ORIGINAL ARRAY\n");
  for(i=0;i<number;i++)
  {
      printf("%5d",array[i]);
  }
  printf("\n");
  printf("\t REVERSED ARRAY\n");
  for(i=number-1;i>=0;i--)
  {
       printf("%5d",array[i]);
  }
}
}
