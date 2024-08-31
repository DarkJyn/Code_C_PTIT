#include <stdio.h>
#include <math.h>

int ucln(int a,int b){
    while(b!= 0){
        int tmp = a % b;
        a = b;
        b = tmp;
    }
    return a;
}
int main() {
	int a,b;
    scanf("%d%d",&a,&b);
    long long bcnn = 1ll*(a / ucln(a,b))*b;
    printf("%d\n%lld",ucln(a,b),bcnn);
    return 0;
    
}