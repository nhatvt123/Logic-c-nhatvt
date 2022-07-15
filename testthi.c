#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int evennumber(int a)
{
	if(a%2==0)
	{
		return 1;
	}
	else 
	return 0;
}
void checkeven(int n, int m)
{	int i;
	if(n<m)
	{
			for(i=n+1;i<m;i++)
	{
		if(evennumber(i)==1)
		{
			printf("%d \n",i);
		}
	}
	}	
	else
	{
		for(i=m+1;i<n;i++)
	{
		if(evennumber(i)==1)
		{
			printf("%d \n",i);
		}
	}	
	}
}
int main(int argc, char *argv[]) {
	int m,n, i;
		printf("Nhap so n : \n");
	scanf("%d",&n);
		printf("Nhap so m : \n");
	scanf("%d",&m);
	printf("the even number between %d and %d : \n",n,m);
	checkeven(n,m);
	return 0;
}
