#include <stdio.h>
#include <math.h>

int main() {
    int t;
    scanf("%d",&t);
    while(t--){
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
        printf("\n");
    }
    return 0;
}