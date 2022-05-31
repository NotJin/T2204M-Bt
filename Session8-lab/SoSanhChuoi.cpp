#include<stdio.h>
#include<string.h>
int main(){
	char s1[100], s2[100];
	printf("Nhap chuoi s1:");
	scanf("%s", s1);
	
	printf("Nhap chuoi s2:");
	scanf("%s", s2);
	if(strcmp(s1,s2) == 0){
		printf("Hai chuoi giong nhau \n");
	}else{
		if(strcmp(s1,s2)>0){
			printf("s1 lon hon s2 \n");
		}else{
			printf("s1 nho hon s2 \n");
		}
	}
}
