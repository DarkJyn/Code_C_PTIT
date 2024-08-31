#include <stdio.h>
#include <math.h>
int fibo[30]={0,1,1};


long long ucln(long long a, long long b){
	while(b != 0){
		int tmp = a % b;
		a = b;
		b = tmp;
	}
	return a;
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		long long a,b;
		scanf("%lld %lld",&a,&b);
		long long res1 = a  / ucln(a,b) * b;
		long long res2 = ucln(a,b);
		printf("%lld %lld",res1,res2);
		printf("\n");
	}
}