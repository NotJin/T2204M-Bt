#include <stdio.h>
#include <math.h>
int main(){
	int n;
	printf("Nhap kich thuoc cua mang:");
	scanf("%d",&n);
	int arr[n];
	printf("Nhap mang:\n");
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	int x;
	printf("Nhap x = ");
	scanf("%d",&x);

	int h = arr[0]-x >=0? arr[0]-x : x - arr[0];
	
	for(int i=0;i<n;i++){
		if(abs(arr[i] - x) < h){
			h = abs(arr[i]-x);
		}
	}
	printf("So can tim: ");
	for(int i=0;i<n;i++){
		if(abs(arr[i] - x) == h){
			printf("%d ",arr[i]);
		}
	}
	
}
