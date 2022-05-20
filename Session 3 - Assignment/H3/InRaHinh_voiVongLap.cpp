#include<stdio.h>
int main(){
	int s;
	printf("Nhap so dong: ");
	scanf("%d", &s);
	
	for(int i = 1; i<= s; i++){
		printf(" \n");
		for(int j = 1; j<=i; j++){
			printf("*");
		}
	}
}
