#include <stdio.h>

int check(int n){
	int tmp = n%10;
	n /= 10;
	while(n){
		if(tmp >= n%10) return 0;
		tmp = n%10;
		n /= 10;
	}
	return 1;
}

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int m,n;
		scanf("%d%d",&m,&n);
		int count = 0;
		for(int i=m;i<=n;i++){
			if(check(i)) count++;
		}
		printf("%d\n",count);
	}
}