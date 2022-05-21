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

//	printf("x = %d\n",x);
	printf("Mang vua nhap:\n");
	for(int i=0;i<n;i++){
		printf("%d  ",arr[i]);
	}
	int sum =0, dem=0;
	for(int i=0;i<n;i++){
		// xet xem arr[i] co phai so le hay khong
		if(arr[i] %2 !=0){
			sum+= arr[i];
			dem++;
		}
	}
	printf("Trung binh cong: %f",(float)sum/dem);
	
}
