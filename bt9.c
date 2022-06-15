#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char aray[2][3];
	int row, col;
	/*printf("\n Enter string:");
	scanf("%s", aray);
	printf("\n The string is %s \n\n", aray);
	for (i=0; i<5; i++)
	printf("\t%d",aray[i]);*/
	for(row=0;row<2;row++)
	{
		for(col =0;col <3; col++)
		{
			printf("\nEnter a Number at [%d][%d]:",row, col);
			scanf("%d",&aray[row][col]);
		}
	}
	for(row=0;row<2;row++)
	{
		for(col =0; col<3;col++)
		{
			printf("\nEnter a Number at [%d][%d] is %d:", row,col,aray[row][col]);
		}
	}
	return 0;
}
