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
	
	int dem = 0, max = 0;
	//max = 0;
	//int slt = 0;
	for(int i = 0; i < n; i++){
		if(arr[i] <= 0){
			printf("mangi: %d", arr[i]);
			if(dem > max){
				max = dem;
				dem = 0;
			}
			dem++;
			printf("Dem: %d", dem);
		}
	}
	printf("So duong lien tiep nhieu nhat: %d", max);
}
