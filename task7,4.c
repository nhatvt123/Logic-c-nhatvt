#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main() 
{
	int num, res;
	printf("nhap so can kiem tra");
	scanf("%d", num);
	
	res = num % 2;
	if( res ==0)
	 printf(" so chan");
	else
	 printf("so le");
	 
}


