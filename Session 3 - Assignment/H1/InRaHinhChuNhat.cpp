#include<stdio.h>
int main(){
	int h, w;
	printf("Nhap chieu cao: ");
	scanf("%d", &h);
	printf("Nhap chieu rong: ");
	scanf("%d", &w);
	
	for(int i = 1; i<= h; i++){
		printf(" \n");
		for(int j = 1; j<=w; j++){
			printf("*");
		}
	}
}
