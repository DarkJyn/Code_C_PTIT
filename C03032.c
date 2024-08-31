#include <stdio.h>
#include <math.h>

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
int supercheck(int n){
    if(check(n) == 0) return 0;
    while(n != 0){
        int tmp = n % 10;
        if(check(tmp) == 0) return 0;
        n /= 10;
    }
    return 1;
}
int main() {
	int t;
	scanf("%d",&t);
	while(t--) {
		int a,b;
        scanf("%d%d",&a,&b);
        int count = 0;
        for(int i = a;i <= b;++i){
            if(supercheck(i)) count++;
        }
        printf("%d",count);
		printf("\n");
	}
}