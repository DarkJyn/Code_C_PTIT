#include <stdio.h>
#include <math.h>

int primeCheck(int n)
{
    if (n == 2 || n == 3)
        return 1;
    if (n < 3 || n % 2 == 0 || n % 3 == 0)
        return 0;
    for (int i = 5; i * i <= n; i += 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return 0;
    return 1;
}
int main() {
	int n;
	scanf("%d",&n);
	while(n--){
		int a;
		scanf("%d",&a);
		for(int i=2;i<=a/2;i++){
			if(primeCheck(i) == 1 && primeCheck(a-i) == 1) printf("%d %d ",i,a-i);
		}
		printf("\n");
	}
}