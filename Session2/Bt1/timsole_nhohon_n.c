#include<stdio.h>
int main(){
	int n;
	int i;
	printf("Nhap n:");
	scanf("%d", &n);
	
	while(i < n ){
		if((i % 2) == 1){
			printf("i: %d\n", i);
		}
		i++;
	}
}
