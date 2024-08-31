#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n+5];
    for(int i = 0; i < n ; ++i){
        scanf("%d",&arr[i]);
    }
    for(int i = n - 1; ~i ; i--){
        printf("%d ",arr[i]);
    }
}