#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int i, j, max;
	printf("\tThis is max : \n");
		printf("for which a table can be printed :");
	scanf("%d", &max);
	
	for(i = 0, j=max; i<=max ; i++ , j--)
	{
		
		printf("%d+ %d = %d \n",i , j, i+j);
	}
	return 0;
}
