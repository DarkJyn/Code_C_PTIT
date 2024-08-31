#include <stdio.h>
#include <math.h>

int main() {
	int a,b;
	scanf("%d%d",&a,&b);
	int range = abs(a-b)+1;
    printf("%d",(a+b)*range/2);
    return 0;
}