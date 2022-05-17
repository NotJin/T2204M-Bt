#include<stdio.h>
#include<math.h>
int main(){
	int a;
	int c;
	int b;
	
	printf("Nhap a = ");
	scanf("%d", &a);
	
	printf("Nhap b = ");
	scanf("%d", &b);
	
	printf("Nhap c = ");
	scanf("%d", &c);
	
	if(a == 0 && b == 0 && c == 0){
		printf("Day khong phai pt bac 2");
	}else{
		int x1;
		int x2;
		
		if(a + b + c == 0 && a != 0){
			printf("Phuong trinh co 2 nghiem: x1 = %d, x2 =  %d", 1, c/a);
		}else if(a - b + c == 0 && a!= 0){
			printf("Phuong trinh co 2 nghiem: x1 = %d, x2 =  %d", -1, -c/a);
		}else{
			int del;
			del = (b * b) - (4 * a * c);
			
			if(del > 0){
				printf("Phuong trinh co 2 nghiem: x1 = %f, x2 =  %f", (float)(-b + sqrt(del))/(2*a), (float)(-b - sqrt(del))/ (2*a));
			}else if(del < 0){
				printf("Phuong trinh vo nghiem");
			}else if(del == 0){
				printf("Phuong trinh co nghiem kep: x1 = x2 = %f", (float)-(b / (2*a)));
			}else{
				return 0;
			}
		}
	}
}
