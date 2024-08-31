#include <stdio.h>

int main() {
	int a,b;
	scanf("%d%d",&a,&b);
	for(int i=1; i <= a; ++i) {
		int tmp = i-1;
        int res = b-1;
        for(int j = 0; j<b ;++j){
			if(tmp < b){
				printf("%c",tmp + 64);
				tmp++;
			}
            else{
                printf("%c",res + 64);
            }
		}
		printf("\n");
	}
}