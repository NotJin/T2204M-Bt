#include<stdio.h>
#include<math.h>

double tinhLuyThua(int x, int y){
	double result = pow(x, y);
	return result;
}
void nhapMang(int n, int arr[]){
	printf("Nhap mang:\n");
	for(int i=0; i<n; i++){
		scanf("%d", &arr[i]);
	}
}
void inMang(int n, int arr[]){
	printf("In mang:");
	for(int i=0; i<n; i++){
		printf("%d", arr[i]);
	}
	printf("\n");
}
void findMaxPrime(int x, int arr[]){
	int i = 1;
	int a = 0;
	if (x < 2) {
		printf("%d khong phai so nguyen to\n",x);
	}
	else {
		while (i <= x){
			if(x % i == 0){
				a++;
			}
		     i++;
		}
		if(a == 2){
			printf("%d la so nguyen to\n",x);
		} else {
			printf("%d khong phai so nguyen to\n",x);
		}
	}
}

int SoNhoNhat(int arr[], int n){
    int min = arr[0];
    for (int i=1; i<n; i++)
        min = (min < arr[i])? min: arr[i];
    return min;
}
//kiem tra xem uoc so co phai la uoc so chung lon nhat cua mang hay ko?
bool KiemTraUocSochung(int arr[], int n, int UocSo){
    for (int i=0; i<n; i++)
        if (arr[i] % UocSo != 0)
            return false;
    return true;
}
int UocSoMang(int n, int arr[]){
    for (int UocSo = SoNhoNhat(arr,n); UocSo >= 1; UocSo--)
        if(KiemTraUocSochung(arr,n,UocSo))
            return UocSo;
    return 1;
}
int solonnhat(int arr[], int n){
    int max=arr[0];
    for (int i=1; i<n; i++)
    {
        max = (max>arr[i]) ? max : arr[i];
    }
    return max;
}
int boichungcuamang(int arr[], int n){
	int max=arr[0];
    int boiso = solonnhat(arr,n);
    for (int i=0; i<n; i++)
    {
        if (boiso % arr[i] != 0)
        {
            boiso += max;
            i=-1;
        }
    }
    return boiso;
}
