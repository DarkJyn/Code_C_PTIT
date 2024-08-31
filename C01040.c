#include <stdio.h>
#include <math.h>

int main() {
	int a;
	scanf("%d",&a);
    int sum = 0;
    for(int i = 1;i<= a/2;++i){
        if(a % i == 0) sum+= i;
    }
    if(sum == a) printf("1");
    else printf("0");
    return 0;
}