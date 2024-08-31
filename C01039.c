#include <stdio.h>
#include <math.h>

int main() {
	int a;
	scanf("%d",&a);
    int count = 0;
    while (a != 0){
        a/= 10;
        count++;
    }
    printf("%d",count);
    return 0;
}