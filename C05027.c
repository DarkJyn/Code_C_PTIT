#include <stdio.h>
#include <math.h>
#include <string.h>
/*
Các hcn đều từ ô 1 1 -> phần bị trùng nhiều nhất là hcn có góc ở điểm 1 1 và điểm có tọa độ là x min y min
*/
int main() {
	int a;
	scanf("%d",&a);
	int minm=10000000, minn=10000000;
	while(a--) {
		int m,n;
		scanf("%d%d",&m,&n);
		minm=fmin(m,minm);
		minn=fmin(n,minn);
	}
	long long res=1ll*minn*minm;
	printf("%lld",res);
}