#include <stdio.h>
#include <math.h>

int check(long long n) {
	int tmp = n % 10;
	n /= 10;
	while(n) {
		if( tmp < n % 10) return 0;
		tmp = n % 10;
		n /= 10;
	}
	return 1;
}

int main() {
	int t;
	scanf("%d",&t);
	while(t--) {
		long long n;
		scanf("%lld",&n);
		if(check(n) == 1) printf("YES");
		else printf("NO");
		printf("\n");
	}
}