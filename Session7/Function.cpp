#include<stdio.h>
#include"Function.h"
int main(){
	int x, y;
	printf("Nhap x = ");
	scanf("%d", &x);
	
	printf("Nhap y = ");
	scanf("%d", &y);
	int mangxyz[x];
	nhapMang(x, mangxyz);
	inMang(x, mangxyz);
	printf("luy thua: %lf\n", tinhLuyThua(x, y));
	findMaxPrime(x, mangxyz);
	printf("Uoc chung lon nhat cua mang la: %d\n", UocSoMang(x, mangxyz));
	printf("Boi chung nho nhat cua mang la: %d\n", boichungcuamang(mangxyz, x));
}
