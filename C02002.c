#include <stdio.h>
#include <math.h>

int main() {
	int a;
	scanf("%d",&a);
    int tmp = 2*a - 1 ;
	for(int i = 1;i<= a;++i){
        for(int j = 1;j <= tmp;++j ){
            if(j < a-i+ 1 ) printf("~");
            else printf("*");
        }
        tmp--;
        printf("\n");
    }
    return 0;
}