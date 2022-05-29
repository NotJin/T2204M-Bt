#include <stdio.h>
int main(){
	int n;
	printf("Nhap kich thuoc cua mang:");
	scanf("%d",&n);
	int arr[n];
	printf("Nhap mang:\n");
	
	int i=0;
	while(i<n){
		// nhap arr[i]
		printf("Nhap so thu %d: ",i);
		scanf("%d",&arr[i]);
		// kiem tra xem arr[i] da nam trong danh sach tu 0->i-1 hay chua
		bool flag = false; // gia su chua co
		for(int j=0;j<=i-1;j++){
			if(arr[j] == arr[i]){
				flag = true;
				break;
			}
		}
		
		if(flag == false){
			i++;
		}else{
			printf("So nay da co trong danh sach, vui long nhap lai\n");
		}
	}
}
