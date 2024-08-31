#include <stdio.h>
#include <math.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int right = n % 10;
        while(n > 10){
            n /= 10;
        }
        if( n == right) printf("YES");
        else printf("NO");
        printf("\n");
    }
	return 0;
}