#include<stdio.h>

int main()
{
	int a[3][3];
	int i,j;
	printf("Enter a matrix \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",& a[i][j]);
		}
	}
	
	int b[3][3];
	printf("Enter 2nd matrix \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",& b[i][j]);
		}
	}
	printf("your matrix is given below \n");

	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%4d",a[i][j]);
		}
	printf("\n");
	}
	printf("your matrix is given below \n");

	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%4d",b[i][j]);
		}
	printf("\n");
	}
	int sum[3][3],sub[3][3],product[3][3];
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			sum[i][j]= (a[i][j] + b[i][j]);
		}
	}
	printf("\n SUM OF 2 MATRICES ARE \n");
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%4d",sum[i][j]);
		}
	printf("\n");	
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			sub[i][j]= (a[i][j] - b[i][j]);
		}
	}
	printf("\n SUB OF 2 MATRICES ARE \n");
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%4d",sub[i][j]);
		}
	printf("\n");
	}	
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			product[i][j]= (a[i][j] * b[i][j]);
		}
	}
	printf("\n PRODUCT OF 2 MATRICES ARE \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%4d",product[i][j]);
		}
	printf("\n");
	}
	
	return 0;	
}
