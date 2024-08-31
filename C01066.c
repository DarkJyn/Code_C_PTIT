#include <stdio.h>
#include <math.h>
int min(int a,int b){
    return a < b ? a : b;
}

int main() {
	int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    int min1 = min(a,b);
    int min2 = min(min1,c);
    printf("%d",min2);
    return 0;
}