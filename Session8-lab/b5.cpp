#include<stdio.h>
#include<string.h>
int nhapChuoi(char s[][100]){
	printf("Nhap chuoi s:");
	for(int i=0; i<10; i++){
		scanf("%s", s[i]);
	}
	printf("Chuoi vua nhap:");
	for(int i=0; i<10; i++){
		printf("%s\n", s[i]);
	}
}

int chuoimax(char s[][100]){
	int max = 0;
	for(int i=1;i<10;i++){
		int len = strlen(s[i]);
        if(len>max){
	        max=len;
		}
    }
    for(int i=0;i<10;i++){
        if(strlen(s[i])==max)
        {
            printf("Chuoi dai nhat la %s co %d ky tu", s[i], max);
            break;
        }
    }
  //return max;
}
int main(){
	char s[10][100];
	nhapChuoi(s);
	chuoimax(s);
}
