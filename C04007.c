#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
int main(){
    int m,n,k;
    scanf("%d%d",&m,&n);
    int a[m+5];
    int b[n+5];
    for(int i = 0; i < m;++i){
        scanf("%d",&a[i]);
    }
    for(int i = 0; i < n;++i){
        scanf("%d",&b[i]);
    }
    scanf("%d",&k);
    for(int i = 0; i < k;++i){
        printf("%d ",a[i]);
    }
    for(int i = 0; i < n;++i){
        printf("%d ",b[i]);
    }
    for(int i = k;i < m;++i){
        printf("%d ",a[i]);  
    }
}