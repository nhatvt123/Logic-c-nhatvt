#include <stdio.h>
#include <stdlib.h>
int main(void) {
	int tnh;
	int sbhoc;
	int diem1;
	int diem2;
	int diem3;
	printf("nhap tong so buoi hoc: \n");
	scanf("%d",&tnh);
	printf("nhap so buoi hoc: \n");
	scanf("%d",&sbhoc);
	if(sbhoc >= tnh/4 )
	{
	printf("nhap so diem ly thuyet: \n");
		scanf("%d",&diem1);
			printf("nhap so diem thuc hanh: \n");
		scanf("%d",&diem2);
			printf("nhap so diem bai tap : \n");
		scanf("%d",&diem3);
		if(diem1>=0 && diem2>=0 && diem3>=0 && diem1<=20 && diem2<=15 && diem3 <=10 )
		{
		if(diem1<8)
		{
			printf("thi lai ly thuyet\n");
		//	return 0;
		}
	//	else{
		
//	printf("nhap so diem thuc hanh: \n");
	//	scanf("%d",&diem2);
		if(diem2<6)
			{
			printf("thi lai thuc hanh \n");
		//	return 0;
		}
	//	else{
//	printf("nhap so diem bai tap : \n");
//		scanf("%d",&diem3);
		if(diem3<4)
			{
			printf("thi lai bai tap \n");
		//	return 0;
		}
	//	else{
		if(diem1 >= 8  && diem2>=6 && diem3>=4)
		{
			printf("Chuc mung! ban pass roi nhe \n");
		}
	}
	else 
	{
			printf("Nhap lai ! ban nhap sai diem: \n");
	}

//	}
//	}
//	}
}
	else 
		{
			printf("hoc lai ban nhe :)) \n");
		}
	return 0;
}
