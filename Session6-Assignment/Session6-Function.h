#include<stdio.h>
#include <algorithm>

int tinhtongchuso(int n){
	int tmp;
	int sum = 0;
	for(int i = 0; i<n; i++){
		tmp = n%10;
		sum += temp
		n = n/10;
	}
	return n;
}

bool ktSNTST1(int n1){
	if(n1<2){
		return false;
	}
	if(n1==2 || n1== 3){
		return true;
	}

	for(int i=2;i<=n1/2;i++){
		if(n1%i==0){
			return false;
		}
	}
	return true;
}
bool ktSNTST2(int n2){
	if(n2<2){
		return false;
	}
	if(n2==2 || n2== 3){
		return true;
	}

	for(int i=2;i<=n2/2;i++){
		if(n2%i==0){
			return false;
		}
	}
	return true;
}

int uCLN(int n1, int n2){
	int x = 0;
	int d1, d2;
	//int i;
	if(ktSNTST1(n1) && ktSNTST2(n2)){
		printf("Uoc chung lon nhat la 1");
	}
	for(i = 1; i <= n1 || i <= n2; i++){
		if(n1 % i == 0){
			d1 = i;
			//printf("uoc1: %d\n", d1);
		}
		if(n2 % i == 0){
			d2 = i;
			//printf("uoc2: %d\n", d2);
		}
		if(d1 == d2){
			//printf("Uoc chung la: %d\n", d1);
			for(int j = 1; j <= d1; j++){
				if(j>x){
					x = j;
				}
			}
		}
	}
	return x;
}

int bcNN(int n1, int n2){
	int lcm;
    int maxV = n1*n2;
    for(int i = std::max(n1, n2); i <= maxV; i++){
        if(i % n1 == 0 && i % n2 == 0){
            lcm = i;
            break;
        }
    }
    return lcm;
}
