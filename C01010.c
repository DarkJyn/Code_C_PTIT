#include <stdio.h>
#include <math.h>
int main(){
	int n;
    scanf("%d",&n);
    int y = n / 365;
    int w = (n - (y * 365)) / 7;
    int d = n - (y*365) - ( 7 * w);
    printf("%d %d %d",y,w,d);
	return 0;
}