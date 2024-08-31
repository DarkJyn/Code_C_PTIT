#include <stdio.h>

int main() {
	int a,b;
	scanf("%d%d",&a,&b);
	for(int i=1; i <= a; ++i) {
		int tmp = i;
		int res = i-1;
        if( i > b) res = b;
        for(int j = 1;j<=b ;++j){
			if(tmp <= b){
				printf("%c",tmp + 64);
				tmp++;
			}
            else{
                printf("%c",res + 64);
                res--;
            }
			
		}
		printf("\n");
	}
}