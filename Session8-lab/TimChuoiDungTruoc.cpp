#include<stdio.h>
#include<string.h>
char layKts(char s[]){
	int skt = strlen(s);
	char dec;
	for(int i = 0; i<skt; i++){
		dec = s[i];
		break;
	}
	return dec;
}
int main(){
	char s1[100], s2[100];
	printf("Nhap chuoi s1:");
	scanf("%s", s1);
	
	printf("Nhap chuoi s2:");
	scanf("%s", s2);
	int s1kt = layKts(s1);
	int s2kt = layKts(s2);
	//printf("vi tri s1:%d\n", s1kt);
	//printf("vi tri s2:%d\n", s2kt);
	if(s1kt>s2kt){
		printf("s1 dung sau s2 trong day alphabet");
	}else{
		
		printf("s1 dung truoc s2 trong day alphabet");
	}
}
