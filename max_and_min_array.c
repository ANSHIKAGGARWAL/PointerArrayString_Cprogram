#include<stdio.h>
int main()
{
  int test_cases,first_array[50],second_array[50],max,min;
  printf("Enter the number of test cases\n");
  scanf("%d",&test_cases);
  while(test_cases--)
{
    int number,i;
    max=first_array[0];
    min=first_array[0];
  printf("\nREAD THE VALUES IN AN ARRAY AND PRINT THE MAXIMUM AND MINIMUM VALUE OF THE ARRAY\n");
   printf("INPUT THE NUMBERS OF ELEMENTS TO STORE IN THE ARRAY\n");
  scanf("%d",&number);
  for(i=0;i<number;i++)
  {
      scanf("%d",&first_array[i]);
  }
  printf("\t ORIGINAL ARRAY\n");
  for(i=0;i<number;i++)
  {
      if(first_array[i]>max)
      max=first_array[i];
      if(first_array[i]<min)
      min=first_array[i];
  }
  printf("MAXIMUM VALUE IN THE ARRAY IS %d\n",max);
  printf("MINIMUM VALUE IN THE ARRAY IS %d\n",min);
}       }
