#include <stdio.h>

int main() {
	int t;
    scanf("%d",&t);
    while(t--){
        int a;
        int sum = 0;
        scanf("%d",&a);
        while(a != 0 ){
            sum += a % 10;
            a /= 10;
        }
        if(sum % 10 == 0) printf("YES");
        else printf("NO");
        printf("\n");
    }
}