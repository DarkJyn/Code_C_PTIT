#include <stdio.h>
#include <math.h>

int Prime[1300000];

void Eratos() { 
	Prime[1]=1;
	for(int i=2; i<=sqrt(1300000); i++) {
		for(int j=i*i; j<=1300000; j+=i) Prime[j]=1;
	}
}

int main() {
	Eratos();
	int n;
	scanf("%d",&n);
	for(int i=2; i<=1300000; i++) {
		if(n == 0) break;
        if(Prime[i] == 0) {
            printf("%d\n",i);
            n--;
        }
	}
    return 0;
    
}