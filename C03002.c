#include <stdio.h>
#include <math.h>

int Prime[1000000];

void Eratos() { 
	Prime[1]=1;
	for(int i=2; i<=sqrt(1000000); i++) {
		for(int j=i*i; j<=1000000; j+=i) Prime[j]=1;
	}
}

int main() {
	Eratos();
	int n;
	scanf("%d",&n);
	for(int i=2; i<=n; i++) {
		if(Prime[i] == 0) printf("%d\n",i);
	}
    return 0;
    
}