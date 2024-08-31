#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int check(int n){
	int res=1;
	int can=sqrt(n);
	for(int i=2;i<=can;i++){
		if(n%i==0){
			res+=i;
			if(n/i!=i) res+=n/i;
		}
	}
	return res==n;
}
int main(){
    int n;
    scanf("%d",&n);
    for(int i = 6;i<=n;++i){
        if(check(i)) printf("%d ",i);
    }   
    return 0;
}