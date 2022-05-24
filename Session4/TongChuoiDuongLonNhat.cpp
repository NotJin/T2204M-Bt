#include<stdio.h>
int main(){
	int n;
	
	printf("Nhap so phan tu: ");
	scanf("%d", &n);
	
	int arr[n];
	printf("Nhap mang:\n");
	for(int i = 0; i < n; i++){
		scanf("%d", &arr[i]);
	}
	for(int i =0; i<n; i++){
		printf("Mang vua nhap: %d\n", arr[i]);
	}
	
	int max = 0, count = 0;
	for(int i = 0; i<n; i++){
		if(arr[i] > 0){
			count += arr[i];
			max = count;
		}else{
			count = 0;
		}
	}
	printf("Tong: %d", count);
}
