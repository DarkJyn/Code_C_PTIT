#include <stdio.h>
#include <math.h>

int main() {
	int a;
	scanf("%d",&a);
    for(int i = 1;i <= a;++i){
        for(int j = 1 ; j <= a;++j){
            if(j > a - i  ) printf("*");
            else printf("~");
        }
        printf("\n");   
    }
    return 0;
}