#include <stdio.h>
#include <math.h>

int Prime(int a){
	for(int i = 2; i<=sqrt(a);i++){
		if (a%i==0)
			return 0;
	}
	return a>1;
}
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        if(Prime(n)) printf("YES");
        else printf("NO");
        printf("\n");
    }
    return 0;
}