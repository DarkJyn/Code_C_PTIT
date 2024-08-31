#include <stdio.h>
#include <math.h>

int main() {
	int a,b;
    scanf("%d %d",&a,&b);
    for(int i = 1;i <= a;++i){
        for(int j = 1; j <= b + i - 1;++j){
            if(j < i ) printf("~");
            else if( j > i && j < b + i - 1 && i > 1 && i < a) printf(".");
            else printf("*");
        }
        printf("\n");
    }
    return 0;
}