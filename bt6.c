#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int make1;
	int make2;
	float GPA;
	printf("nhap diem 1 và diem 2 \n");
	scanf("%d%d",&make1 , &make2);
	GPA=((float)make1 + (float)make2)/2;
	printf("diem trung binh:%f",GPA);
	return 0;
}
