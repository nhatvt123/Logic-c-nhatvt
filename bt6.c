#include <stdio.h>
#include <stdlib.h>

int a,b;
char ch, option;
void nhaphaiso(){						// Ham nhap 2 so
	printf("Nhap so thu nhat: \n");
	scanf("%d",&a);
	printf("Nhap so thu hai: \n");
	scanf("%d",&b);
}
int tong(int a, int b)						// Ham Tong
{
	return (a+b);
}
int hieu(int a, int b)						// Ham Tru
{
	return (a-b);
}
int tich(int a, int b)						// Ham Nhan
{
	return (a*b);
}
int thuong(int a, int b)						// Ham Nhan
{
	return (a/b);
}

int main(int argc, char *argv[]) {	
//nhaphaiso(i,j);		
	do{
	printf("Xin moi lua chon cac chuc nang: \n");
	printf("1.Nhap hai so\n2.Tong hai so\n");
	printf("3.Hieu hai so\n4.Tich hai so\n5.Thuong hai so\n6. Ket thuc\n");
	fflush(stdin);
	scanf("%c",&ch);
		if(ch<'1'||ch>'6'){
		printf("\n Khong ton tai lua chon xin moi nhap lai.");
		}
			else{
				switch(ch){
					case '1':
					nhaphaiso(a,b);
					break;
					case '2':
					nhaphaiso();
						printf("tong la %d: \n",tong(a,b));
					break;
					case'3':
					nhaphaiso(a,b);
					//hieu(i,j);
					break;
					case'4':
					nhaphaiso(a,b);
					//tich(i,j);
					break;
					case'5':
					nhaphaiso(a,b);
					//thuong(i,j);
					break;
					case'6':
					printf("Exit\n");
					default:
					break;
				}
			}
		printf("Ban co muon lam tiep khong (Y/N)?\n");
		fflush(stdin);
		scanf("%c",&option);
	}while (option=='Y'||option=='y');	
return 0;
}
