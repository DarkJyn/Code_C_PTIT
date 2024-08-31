#include <stdio.h>
#include <math.h>

int main(){
    int t;
    scanf("%d",&t);
    for(int i = 1;i<=t;++i){
        int a;
        scanf("%d",&a);
        printf("Test %d: ",i);
        for(int j = 2;j<=sqrt(a);++j){
            int count = 0;
            while(a % j == 0){
                count++;
                a /= j;
            }
            if (count > 0) printf("%d(%d) ",j,count);
        }
        if ( a > 1) printf("%d(1)",a);
        printf("\n");
    }
    return 0;
}