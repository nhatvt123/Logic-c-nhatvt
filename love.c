#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int i, j, n;
	char name[150];
	int len;
	
	printf("Enter your name: \n");
	gets(name);
		len = strlen(name);
	printf("Enter value of n: ");
	scanf("%d", &n);
	

	
	for(i=n/2; i<=n; i+=2)
	{
		printf(" ");
		
	}
	for(j=1; j<i; j++)
	{
		printf("*");
	}
	for(j=1; j<=n-i; j++)
	{
		printf(" ");
	}
	for(j=1; j<=i; j++);
	{
		printf("*");
	
	}
	printf("\n");
	for(i=n; i>=1; i--)
	{
		for(j=i; j<n; j++)
		{
			printf(" ");
		}
		if(i==n)
		{
			for(j=1;j<=(n*2-len)/2; j++)
			{
				printf("*");
			}
			printf("%s", name);
			for(j=1;j<(n*2-len)/2; j++)
			{
				printf("*");
			}
		}
		else 
		{ 
		  for(j=1; j<=(i*2)-1; j++);
		  {
		  	printf("*");
		  }
		}
		printf("\n");
	}
	
	return 0;
}
