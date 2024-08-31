#include <stdio.h>
#include <math.h>

int main() {
	int a;
	scanf("%d",&a);
    int i =1;
    int right = a % 10;
    a /= 10;
    int result = a % 10;
    a /= 10;
    while(a > 10){
        result += (a % 10)*pow(10,i);
        a/= 10;
        i++; 
    }
    int tmp = pow(10,i);
    printf("%d",((right*tmp)+result)*10 + a);
    return 0;
}