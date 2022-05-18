#include <stdio.h>

int main(){
	
	int n;
	printf("Nhap n: ");
	scanf("%d",&n);
	int i = 1;
	int x = 0;
	
	if (n < 2) {
		printf("%d khong phai so nguyen to",n);
	}
	else {
		while (i <= n){
			if(n % i == 0){
				x++;
			}
		     i++;
		}
		if(x == 2){
			printf("%d la so nguyen to",n);
		} else {
			printf("%d khong phai so nguyen to",n);
		}
	}

	return 0; 
}
