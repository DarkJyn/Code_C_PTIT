#include <stdio.h>
#include <math.h>

int main() {
	int a;
	scanf("%d",&a);
    int right = a  % 10;
    while (a > 10){
        a /= 10;
    }
    printf("%d %d",a,right);
    return 0;
}