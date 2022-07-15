#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i,j,k,t;
	//i=0;
	printf("Enter no. of rows :");
	//scanf("%d", &i);
	//printf("\n");
	for(j=1;j<10; j++)
	{
		printf("\n");
		//printf("%d*%d=%d",i,j,i*j );
		for(k=1;k<10;k++)
		{
			printf("%d*%d=%d \t",k,j,k*j );
		}
	}
	return 0;
}
