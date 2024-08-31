#include <stdio.h>
#include <math.h>
int main(){
	int t;
    scanf("%d",&t);
    while(t--){
        long long a;
        scanf("%lld",&a);
        int tmp = sqrt(a);
        if(tmp * tmp == a) printf("YES");
        else printf("NO");
        printf("\n");
    }
	return 0;
}