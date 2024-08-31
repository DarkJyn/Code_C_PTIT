#include <stdio.h>
#include <math.h>
int fac(int a){
    int rum = 1;
    for(int i = 1;i<= a;++i){
        rum *= i;
    }
    return rum;
}
int main() {
	int a;
	scanf("%d",&a);
    int tmp = a;
    int sum = 0;
    while(a != 0){
        sum += fac(a % 10);
        a /= 10;
    }
    if(sum == tmp) printf("1");
    else printf("0");
    return 0;
}