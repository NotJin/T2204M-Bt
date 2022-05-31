#include<stdio.h>
#include<string.h>
int main(){
	char s[10][100];
	printf("Nhap chuoi s:");
	for(int i=0; i<10; i++){
		scanf("%s", s[i]);
	}
	printf("Chuoi vua nhap:");
	for(int i=0; i<10; i++){
		printf("%s\n", s[i]);
	}
}
