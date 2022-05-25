#include<stdio.h>
int main(){
	int n;
	int par = 100;
	printf("Nhap n: ");
	scanf("%d", &n);
	
	int arr[n];
	printf("Nhap mang:\n");
	for(int i = 0; i<n; i++){
		scanf("%d", &arr[i]);
	}
	printf("Mang vua nhap: ");
	for(int i=0; i<n; i++){
		printf("%d ", arr[i]);
	}
	if(n <= 0 && n > par){
		printf("So phan tu k hop le");
	}
	for(int i = 0; i< n; i++){
		printf("Nhap mang a[%d]", i);
		scanf("%d", &arr[i]);
	}
	
	int max = arr[0];
	int min = arr[0];
	for(int i = 0; i<n; i++){
		if(arr[i] > max){
			arr[i] = max;
		}
		if(arr[i]< min){
			arr[i] = min;
		}
	}
	printf("[%d, %d] la doan chua cac gia tri trong mang", min, max);
}
