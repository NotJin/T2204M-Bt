#include<stdio.h>
int main(){
	int i, j, x, hi, lo, n;
	printf("Nhap n: ");
	scanf("%d", &n);
	
	int arr[n];
	printf("Nhap mang:\n");
	for(i = 0; i<n; i++){
		scanf("%d", &arr[i]);
	}
	printf("Mang vua nhap: ");
	for(i=0; i<n; i++){
		printf("%d ", arr[i]);
	}
	
	printf("Nhap x:");
	scanf("%d", &x);
	
	lo = 0;
	hi = n;
	int a= 0, b= 0;
	int mid = 0;
	int max = arr[0];
	bool flag = false;
	for(i = 0; i<n; i++){
		if(arr[i]>=0){
			max = arr[i];
		}
	}
	for(i = 0; i< n; i++){
		mid = lo + (hi - lo)/2;
		if(x == arr[mid]){
			flag = true;
			printf("Vi tri x can tim la: %d\n", mid);
			//printf("Vi tri xa x nhat la: %d", )
			a = max - x;
			b = x - arr[0];
			if(a < b){
				printf("Gia tri xa x nhat la: %d", arr[lo - lo]);
			}else if(a > b){
				printf("Gia tri xa x nhat la: %d", max);
			}
			break;
		}else if(x > arr[mid]){
			lo = mid + 1;
		}else if(x < arr[mid]){
			hi = mid - 1;
		}
	}
	if(flag == false){
		printf("K tim thay x");
	}
}
