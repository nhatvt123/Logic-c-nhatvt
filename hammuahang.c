#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int tongtien(int a, int b)
{ 

return a*b;
}

int main(int argc, char *argv[]) {
	 int dgia,slg,tt;
	 char x;
	 tt=0;
	 do
	 {
	 printf("\n moi ban nhap don gia:\n");
	 fflush(stdin);
	 scanf("%d",&dgia);
	 printf("\n moi ban nhap so luong:\n");
	 fflush(stdin);
	  scanf("%d",&slg);
	tt+=tongtien(dgia,slg);
	
	 printf("\n Bam phim bat ky de tiep tuc\n \tDe dung lai bam phim n : \n");
	 	 fflush(stdin);
	 scanf("%c",&x);
	}
	while(x!='n');
	 {
	 	printf("\n tong tien hang la: %d\n",tt);
	 }
	return 0;
}
