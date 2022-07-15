#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	int num1;
	//int num2;
	int num2;
	int sum;
	int a1;
	//printf("Enter two intergers, and I will tell you \n");
//	printf("the relationships the satisfy: ");
printf("nhap num1: ");
	scanf("%d", &num1);
	printf("nhap num2: ");
	scanf("%d", &num2);
	
//	scanf("%d", &num1);
//	scanf("%d%d", &num1, &num2);
	/*if( num1 == num2 )
	{
	printf("%d is equal to %d\n", num1, num2);
	}
	if( num1 != num2 )
	{
	printf("%d is not equal to %d\n", num1, num2);
	}
	if( num1 < num2 )
	{
	printf("%d is less than %d\n", num1, num2);
	}*/
sum= num1+num2;
a1= sum%2;
	if( a1 == 0)
	{
		if(sum=2)
	{
		printf("trung so %d \n",sum);
		}	
		else
		{
			printf("sai roi tim lai di %d ");
		}
		
		
	}
	else
		{ 
			printf("sai roi tim lai di \n");
		}
	
	return 0;
}
