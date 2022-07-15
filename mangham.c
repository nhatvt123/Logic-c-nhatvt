#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
float calculateSum(float num[]);
int main(int argc, char *argv[]) {
	float result, num[] = {23.4, 33, 333, 423, 234, 4};
	
	result = calculateSum(num);
	printf("Result = %.2f\n",result);
	return 0;
}
float calculateSum(float num[])
{
	float sum =0.0;
	int i;
	for ( i = 0; i < 6 ; ++i)
	{
		sum+=num[i];
	}
	return sum;
}
