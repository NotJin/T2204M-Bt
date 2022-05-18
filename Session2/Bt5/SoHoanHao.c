#include<stdio.h>
int main(){
	int n, i, s;
	printf("Nhap n: ");
	scanf("%d",&n);
	i = 1;
	s = 0;
	
	if(n <= 0) {
		printf("n phai lon hon hoac bang 0");
	} else{
		while(i < n) {
			if(n % i == 0){
				s = s + i;
			}
			i++;
		} if(s == n){
		printf("%lu la so hoan hao",n);
		} else {
	    printf("%lu khong phai la so hoan hao",n);
		}
	}
}
