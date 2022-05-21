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
	int x;
	int dem = 0;
	printf("Nhap x: ");
	scanf("%d", &x);
	for(int i = 0; i<n; i++){
		if(x == arr[i]){
			printf("x thuoc mang\n");
		}
		if(x != arr[i]){
			printf("x khong thuoc mang\n");
		}
		dem++;
	}
}
