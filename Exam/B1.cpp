#include <stdio.h>

int main(){
	int n;
	printf("Nhap vao so nguyen co 3 chu so: ");
	scanf("%d",&n);	
	
	int a;
	int bd=100;
	while(bd>0){
		int a = n/bd;
		if(a == 1){printf(" one");
		}else if (a == 2){printf(" two");
		}else if (a == 3){printf(" three");
		}else if (a == 4){printf(" four");
		}else if (a == 5){printf(" five");
		}else if (a == 6){printf(" six");
		}else if (a == 7){printf(" seven");
		}else if (a == 8){printf(" eight");
		}else if (a == 9){printf(" nine");
		}else if (bd<=10){if (a == 0){printf("zero");}}
		n %= bd;
		bd /= 10;
	}
}

