#include <stdio.h>
#include <math.h>

int main() {
	int a;
	scanf("%d",&a);
    int countc = 0;
    int countl = 0;
    while( a != 0 ){
        if( (a % 10) % 2 == 0 ) countc ++;
        else countl++;
        a /= 10;
    }
    printf("%d %d",countl,countc);
    return 0;
}