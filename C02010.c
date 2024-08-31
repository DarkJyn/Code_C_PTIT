#include <stdio.h>

int main() {
	int a,b;
	scanf("%d%d",&a,&b);
	for(int i=1; i<=a; ++i) {
		printf("%d",i);
		int tmp = i+1;
		int res = i - 1;
		if (i> b) res = b - 1;
        for(int j = 2;j<=b ;++j){
			if(tmp <= b){
				printf("%d",tmp);
				tmp++;
			}
			else{
				printf("%d",res);
				res--;
			}
		}
		printf("\n");
	}
}