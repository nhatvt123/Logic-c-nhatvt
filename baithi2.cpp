#include <stdio.h>
int a,b;
void nhap(int a[]){
    for(int i = 0; i < 10; i++){
        printf("\nNhap a[%d] = ",i+1);
        scanf("%d", &a[i]);
    }
}
void xuat(int a[]){
    for(int i = 9; i >= 0; i--){
        printf("%d \t", a[i]);
    }
}
int main(){
    int a[10];
    int n;
    printf("\nNhap 10 so nguyen:\n "); 
    nhap(a);
    printf("\nMang vua nhap la: ");
    xuat(a);
}
