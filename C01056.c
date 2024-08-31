#include <stdio.h>
#include <math.h>
int check(int a[],int n){
	for(int i=1;i<n;i++){
		if(a[i]>a[i-1]) return 0;
	}
	return 1;
}

int main() {
	int a;
	scanf("%d",&a);
	while(a--){
		long long n;
        scanf("%lld",&n);
        int arr[20];
        int res = 0;
        while(n != 0){
            arr[res++] =  n % 10;
            n /= 10;
        }
        if(check(arr,res)) printf("YES");
        else printf("NO");
        printf("\n");
	}
    return 0;
}