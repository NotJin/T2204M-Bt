#include<stdio.h>
 int main () {  
 int n;
 printf("Nhap n: ");
 scanf("%d",&n);
 int i = 1 ;
 int max;

 while(i < n ) {
 	if( i % 2 == 0 && i % 3 == 0)
	 {
	 	if(i>max){
	 		max=i;
		 }	
 }  
	i++;
}
	printf("max = %d",max);	
 
 return 0;
 }
