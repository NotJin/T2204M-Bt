#include <stdio.h>

  int main(){
  int n;
  printf("Nhap n: ");
  scanf("%d",&n);
  int i = 1;
  int S = 0;
  
  if(n < 0) {
  	printf("n phai lon hon 0");
  } else {
  	while(i <= n){
  		S = S + i;
  		i++;
	  }
	 printf("S = %d",S); 
  }
  return 0;
}
