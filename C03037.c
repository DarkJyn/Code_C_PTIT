#include <stdio.h>
#include <math.h>

int main() {
	long long n;
	scanf("%lld",&n);
	int prime[8]={};
	while(n != 0){
		switch (n%10){
			case 2:
				prime[2]++;
				break;
			case 3:
				prime[3]++;
				break;
			case 5:
				prime[5]++;
				break;
			case 7: prime[7]++;	
		}
		n /= 10;
	}
	for(int i = 2 ; i<=7 ;i++) {
		if(prime[i] > 0) printf("%d %d\n",i,prime[i]);
	}
}