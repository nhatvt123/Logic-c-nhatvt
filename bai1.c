#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num[5];
	int i , vitrimin;
	printf("Enter 5 number:\n");
	for(i=0 ; i<5 ; i++)
	{
		scanf("%d",&num[i]);
	}
	
	printf("vi tri min la %d\n" , minidex(num)+1);
	printf("vi tri max la %d\n" , max(num)+1);
		printf("tong la %d\n" , tong(num));
			printf("gia tri trung binh la %d" , tb(num));
	return 0;
}
int minidex(int num[])
{
	int i, min,j=0;
	min = num[0];
	for(i=0 ; i<5 ;i++)
	{	
		if(num[i]<min){	
		min=num[i];
		j=i;	
	}	
	}
	return j ;		
}
int max(int num[])
{
	int i, max,j=0;
	max = num[0];
	for(i=0 ; i<5 ;i++)
	{	
		if(num[i]>max){	
		max=num[i];
		j=i;	
	}	
	}
	return j ;		
}
int tong(int num[])
{
	int i,sum;
	sum = 0;
	for(i=0 ; i<5 ;i++)
	{	
	sum = sum + num[i]; 	
	}	
	
	return sum;		
}
int tb(int num[])
{
	int i;
	int sum = 0;
	for(i=0 ; i<5 ;i++)
	{	
	sum = sum + num[i]; 	
	}	
	return sum/i ;		
}
