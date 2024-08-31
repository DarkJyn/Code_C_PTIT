#include <stdio.h>
#include <math.h>

int check(int n) {
	int tmp = 0;
	while(n) {
		if( n %10 == 4) return 0;
		tmp += n%10;
		n/=10;
	}
	return tmp%10 == 0;
}

int rev(int n) {
	int ngc = 0;
	int xuoi = n;
	while(xuoi) {
		ngc = ngc*10+xuoi%10;
		xuoi /= 10;
	}
	return ngc  ==n;
}

int main() {
	int t;
	scanf("%d",&t);
	while(t--) {
		int n;
		scanf("%d",&n);
		int dau = pow(10,n-1);
		int cuoi= pow(10,n)-1;
		for(int i = dau; i <= cuoi; i++) {
			if(check(i) && rev(i)) {
				printf("%d ",i);
			}
		}
		printf("\n");
	}
}