#include<stdio.h>
#include<string.h>

//program to check PALINDROME STRING

int main()
{
	char n[100];
	int i,l,f=1;
	printf("\t ENTER STRING\n");
	gets(n);
	
	l=strlen(n);
	
	for(i=0;i<l;i++)
	{
		if(n[i]!=n[l-i-1])
		{
			f=0;
			break;
		}
	}
	if(f==1)
	printf("\t PALINDROME STRING \n");
	else
	printf("\t NOT A PALINDROME STRING \n");
	

return 0;
}
