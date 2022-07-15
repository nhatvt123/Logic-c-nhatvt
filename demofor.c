#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int a, b, count;
	printf("\tThis is min,max : \n");
	scanf("%d %d", &a, &b);
	
	for(count =a; count<=b ; count++)
	{
	  if(count%7==0)
		
		printf("in ra %d \n",count);
	}
	printf("\n\t\t world. \n");
	return 0;
}
