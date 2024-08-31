#include <stdio.h>
#include <math.h>
int main(){
    int t;
    scanf("%d",&t);
    for(int i = 1;i<= t;++i){
        long long a;
        scanf("%lld",&a);
        printf("%lld",2*a);
        printf("\n");
    }
    return 0;
}