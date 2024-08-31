#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
int check(int n){
    if (n == 2 || n == 3)
        return 1;
    if (n < 3 || n % 2 == 0 || n % 3 == 0)
        return 0;
    for (int i = 5; i * i <= n; i += 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return 0;
    return 1;
}
int rev(int n){
    char tmp[100];
    sprintf(tmp,"%d",n);
    int left = 0;
    int right = strlen(tmp) - 1;
    while ( left < right ){
        if (tmp[left] != tmp[right]) return 0;
        left++;
        right--;
    }
    return 1;
}

int main(){
    int t;
    scanf("%d",&t);
    for(int i = 1;i<=t;++i){
        int a,b;
        scanf("%d %d",&a,&b);
        int cnt = 10;
        for(int i = a;i<=b;++i){
            if(cnt != 0){
                if(check(i) == 1 && rev(i) == 1 ){
                   printf("%d ",i);
                   cnt--;
                }
            }
            else{ 
                printf("\n");
                cnt = 10;
            }
        }
        printf("\n");
        printf("\n");
    }
    return 0;
}