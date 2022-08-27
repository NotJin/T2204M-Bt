#include <stdio.h>
#include <string.h>

void sortStr(char str[]) {
	
	int length = strlen(str);
	char temp;

  	for (int i = 0; i < length-1; i++) {
      	for (int j = i+1; j < length; j++) {
		
        	if (str[i] > str[j]) {
        		temp = str[i];
        		str[i] = str[j];
            	str[j] = temp;
        	}
		}
  	}
   
}
int main () {
	char s[100];
	printf("Nhap chuoi: ");
	scanf("%s",s);
  	sortStr(s);
  	printf("\nSap xep chuoi theo anphabet: %s \n", s);
}
