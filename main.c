#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	int integer1;
	int integer2;
	int sum;
	
	printf("Enter first interger \n");
	scanf("%d", &integer1);
	printf("Enter second interger\n");
	scanf("%d", &integer2);
	sum = integer1 + integer2;
	printf("sum=%d",sum);
	return 0;
}
