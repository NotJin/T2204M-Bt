#include<stdio.h>
#include<string.h>
int main(){
	printf("Nhap chuoi s:");
	for(int i=0; i<10; i++){
		scanf("%s", s[i]);
	}
	char s_max[100];
	strcpy(s_max, arrs[0]);//s_max = arrs[0]
	
	for(int i=0; i<10; i++){
		if(strcmp(arrs[i],s_max){
			strcpy(s_max, arrs[i]);
		}
	}
	printf("Chuoi dung dau alphabet la: %s", s_max);
}
