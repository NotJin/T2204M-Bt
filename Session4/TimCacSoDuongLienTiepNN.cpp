#include<stdio.h>
int main(){
	int n;
	
	printf("Nhap so phan tu: ");
	scanf("%d", &n);
	
	int arr[n];
	printf("Nhap mang:\n");
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	
	printf("Mang vua nhap:\n");
	for(int i=0;i<n;i++){
		printf("%d  ",arr[i]);
	}
	
	int dem = 0, max = 0;
	for(int i = 0; i < n; i++){
		if(arr[i] > 0){
			dem++;
			if(dem > max){
				max = dem;
			}
		}else{
				dem = 0;
			}
	}
	printf("So duong lien tiep nhieu nhat: %d", max);
}
