#include <stdio.h>
#include <math.h>

int ucln(int a,int b){
    while ( b != 0){
        int tmp = a % b;
        a = b;
        b = tmp;
    }
    return a; 
}
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int a,b;
        scanf("%d %d",&a,&b);
        printf("%d",ucln(a,b));
        printf("\n");
    }
    return 0;
}