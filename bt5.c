#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char ch;
	int i;
	float f;
	double d;
	//result = (ch/i) + (f*d) - (f*i);
	printf("nhap lan luot cac so:");
	scanf("%c %d %f %lf", &ch, &i, &f, &d);
	fflush(stdin);
	printf("ket qua:%lf", (ch/i) + (f*d) - (f*i));
	return 0;
}
