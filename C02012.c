#include <stdio.h>

int main() {
	int a,b;
	scanf("%d%d",&a,&b);
	for(int i=1; i<=a; ++i) {
		printf("%d",i);
		int tmp = i;
        int res = 2;
        for(int j = 2;j <= b;++j){
            if(i > 1 && tmp > 1){
                tmp--;
                printf("%d",tmp);
            }
            else{
                printf("%d",res);
                res++;
            }
            
        }
		printf("\n");
	}
    return 0;
}   