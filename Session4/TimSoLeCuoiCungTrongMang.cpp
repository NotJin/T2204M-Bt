#include<stdio.h>
int main(){
	int n;
	int arr[n];
	
	printf("Nhap so phan tu: ");
	scanf("%d", &n);
	printf("Nhap mang:\n");
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}

	printf("Mang vua nhap:\n");
	for(int i=0;i<n;i++){
		printf("%d  ",arr[i]);
	}
	int  last = arr[0];
	for(int i = n-1; i<n; i--){
		if(arr[i] % 2 != 0){
				last = arr[i];
				break;
		}
	}
	printf("So le cuoi cua mang: %d\n", last);
}
