#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int sodu, user, pass;
sodu=10000000;
user=123;
pass=456;
int login(int a, int b)
{
	bool value;
	if(a == 123 && b == 456)
	value=true;
	return value;	
}
int ruttien()
{ int c,tg;
	printf("Moi ban nhap so tien can rut: \n");
	scanf("%d",&c);
	tg=c%50000;
	if(c>3000000||tg!=0)
	{
		printf("\n So tien nhap khong dung\n");
	}
	else
	{
	if(c>=sodu+1)
	{ 
	printf("So tien rut lon hon so tien hien co\n \t Vui long thuc hien lai\n");
	}
	else
	{
		printf("ban rut thanh cong so tien %d VND \n",c);
		sodu=sodu-c;
		printf("so du hien tai %d VND \n",sodu);
	}
}
	return 0;
}
int chuyenkhoan()
{       
		int stk, stchuyen,tg;
		printf("Moi ban nhap stk ngan hang can chuyen: \n");
		scanf("%d",&stk);
		printf("So tien can chuyen:\n");
		scanf("%d",&stchuyen);
			tg=stchuyen%50000;
	if(stchuyen>3000000||tg!=0)
	{
		printf("\n So tien nhap khong dung\n");
	}
	else
	{
		if(stchuyen>=sodu+1)
	{ 
	printf("So tien chuyen lon hon so tien hien co\n \t Vui long thuc hien lai\n");
	}
		else 
		{
		printf("\nBan chuyen thanh cong so tien %d VND cho stk %d \n",stchuyen,stk);
		sodu=sodu-stchuyen;
		printf("\nSo du tai khoan  %d VND",sodu);
		}
	}
	
}
int sod()
{
	printf("So du trong tai khoan cua ban la: %d VND \n",sodu);
}

int main(int argc, char *argv[]) {
	int id, mk, tien, stk, gt;
	char lap;
	do
	{
	printf("\n Chao mung ban, moi ban nhap the : \n");
	scanf("%d", &id);
	printf("Moi ban nhap mat khau : \n");
	scanf("%d", &mk);
	if( login(id,mk)==1)
	{
		printf("\n\tBan da dang nhap thanh cong\n\n");
		do{		
		printf("\t1. rut tien \t");
		printf("\t2. chuyen khoan \n");
		printf("\t3. Xem so du \t");
		printf("\t4. thoat \t");
		printf("\n moi ban chon:");
		fflush(stdin);
			scanf("%d",&gt);
			if(gt<1||gt>4)
			{
					printf("\nNhap sai, moi ban nhap lai:\n");
			}
			switch(gt)
			{
				
			case 1:
				ruttien();
					break;
			case 2:
				chuyenkhoan();
					break;
			case 3:
			
				sod();
				
				break;
			case 4:
				break;
		}
		printf("\n chon y de tiep tuc:\n");
		fflush(stdin); 
		scanf("%c", &lap);
	}
	while(lap=='y');
	}
	else 
	{
		printf("\nsai mk, moi ban nhap lai:\n");
	}
}
while(login(id,mk)==0);
	
	return 0;
}


