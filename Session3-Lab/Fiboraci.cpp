#include<stdio.h>
int main(){
	int n;
	printf("Nhap n: ");
	scanf("%d", &n);
	
	int x1 = 0, x2 = 1;
	int i = 1, x3;
	while(i <= n){
		x3 = x1 + x2;
		x1 = x2;
		x2 = x3;
		i++;
	}
	printf("F: %d", x3);
}
