#include<stdio.h>
#include<string.h>
int main(){
	char str[100];
	printf("Nhap chuoi:");
	scanf("%s", str);
	printf("Chuoi vua nhap: %s\n", str);
	char temp;
	int i, j;
	int len = strlen(str);
	for(i=0; i<len-1; i++){
		for(j = i+1; j<len; j++){
			if(str[i] > str[j]){
				temp = str[i];
				str[i] = str[j];
				str[j] = temp;
			}
		}
	}
	printf("Chuoi sau khi sap xep: %s", str);
}
