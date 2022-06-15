#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int id, mk, id1, mk1, tien, stk, gt, sdu;
	char lap;
	do
	{
	printf("\n Chao mung ban, moi ban nhap the : \n");
	scanf("%d", &id);
	printf("Moi ban nhap mat khau : \n");
	scanf("%d", &mk);
	id1= 123;
	mk1= 456;
	sdu= 10000000;
	if( id==id1 && mk==mk1)
	{
		printf("\tda dang nhap thanh cong\n\n");
		do{		
		printf(" 1. rut tien \t");
		printf(" 2. chuyen khoan \n");
		printf(" 3. Xem so du \t");
		printf(" 4. thoat \t");
		printf("\n moi ban chon:");
		fflush(stdin);
			scanf("%d",&gt);
			switch(gt)
			{
				
			case 1:
				printf("nhap so tien can rut:\n");
				fflush(stdin);
				scanf("%d",&tien);
				if(tien<=sdu)
				printf("ban rut xong so tien: %d\n",tien);
				else
				printf("vuot qua so du");
					break;
			case 2:
				printf("nhap so tai khoan can chuyen trong cung ngan hang:\n");
				fflush(stdin);
				scanf("%d",&stk);
				printf("\t nhap so tien muon chuyen: \n");
				fflush(stdin);
				scanf("%d",&tien);
					if(tien<=sdu)
					{
				printf("\t Ban da chuyen xong so tien:%d cho stk:%d",tien,stk);
				sdu=sdu-tien;
				printf("\t So du tai khoan: %d \n",sdu);
					}
				else
				printf("vuot qua so du");
			
					break;
			case 3:
			printf("so du qua nhieu khong hien thi duoc het :))  : %d",sdu);
				break;
			case 4:
				break;
		}
		printf("chon y de tiep tuc:\n");
		fflush(stdin); 
		scanf("%c", &lap);
	}
	while(lap=='y');
	}
	else 
	{
		printf("sai mk, moi ban nhap lai\n");
	}
}
while(id1!=id1||mk!=mk1);
	return 0;
}
