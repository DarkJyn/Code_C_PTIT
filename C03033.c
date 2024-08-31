#include <stdio.h>
#include <math.h>
int main(){
    int t;
    scanf("%d",&t);
    while (t--){
        int a;
        scanf("%d",&a);
        printf("%d = ",a);
        int can = sqrt(a);
        int count = 0;
        for(int i = 2; i<= can;++i){
            if( a % i == 0){
                while(a % i == 0){
                    count++;
                    a /= i;
                }
                printf("%d^%d",i,count);
                count = 0 ;
                if( a > 1) printf(" * ");
            }
        }
        if(a > 1){
            printf("%d^1",a);
        }
    printf("\n");
    }
}