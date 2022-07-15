#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

	int find_sum(int a,int b)
{
    int sum = a + b;
    return sum;
} 
	int find_hieu(int a,int b)
{
    int hieu = a - b;
    return hieu;
} 
	int find_nhan(int a,int b)
{
    int nhan = a*b;
    return nhan;
}
	int find_chia(int a,int b)
{
    int chia = a/b;
    return chia;
}
int main(void)
{
	int a,b,kq;
	char c;
	printf("nhap 2 so : \n");
	scanf("%d %d", &a, &b);
	printf("nhap ky tu +, -, *, / : \n");
	fflush(stdin);
	scanf("%c", &c);
	switch(c)
	{
	case '+':
	kq=	find_sum(a,b);
		printf("ket qua :%d \n",kq);
		break;
	case '-':
		kq=find_hieu(a,b);
			printf("ket qua :%d \n",kq);
	break;
	case '*':
		kq=find_nhan(a,b);
		printf("ket qua :%d \n",kq);
		break;
	case '/':
		kq=find_chia(a,b);
		printf("ket qua :%d \n",kq);
		break;
  default :
  	break;
  }
    return 0;
}
	
	
	
