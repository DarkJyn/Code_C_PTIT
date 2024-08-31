#include <stdio.h>
#include <math.h>

int SumDigits(int n) {
	int tmp = 0;
	while(n) {
		tmp += n % 10;
		n /= 10;
	}
	return tmp;
}

int Prime(int n) {
	int res = 0;
	for(int i = 2; i <= sqrt(n); i++) {
		while(n % i==0) {
			res += SumDigits(i);
			n /= i;
		}
	}
	if(n!=1) res += SumDigits(n);
	return res;
}

int main() {
	int n;
	scanf("%d",&n);
	if(SumDigits(n) == Prime(n)) printf("YES");
	else printf("NO");
}