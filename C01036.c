#include <stdio.h>
#include <math.h>

int main() {
	int a;
	scanf("%d",&a);
	int fac = 1;
	while(a != 0){
        fac *= a % 10;
        a/= 10;
    }
    printf("%d",fac);
    return 0;
}