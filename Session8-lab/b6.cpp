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
int layKtDau(char s[][100]){
	char dec;
	for(int i = 0; i<10; i++){
		int skt = strlen(s[i]);
		for(int i=0; i<skt; i++){
			dec = s[i][100];
			break;
		}
	}
	return dec;
}
int timMin(char s[][100]){
	int min = 0;
	int ktd;
	for(int i=0; i<10; i++){
		ktd = layKtDau(s);
		if(ktd<min){
			min = ktd;
		}
	}
	for(int i=0;i<10;i++){
        if(ktd==min)
        {
            printf("Chuoi dai nhat la %s", s[i]);
            break;
        }
    }
	//return min;
}
//int timChuoiDungTruoc(char s[][100]){
//	for(int i=0; i<10; i++){
//		
//	}
//}
int main(){
	char s[10][100];
	nhapChuoi(s);
	timMin(s);
	//printf("Chuoi dung dau trong day alphabet la: %d", timMin(s));
}
