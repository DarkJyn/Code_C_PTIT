/*
Họ Tên: Đỗ Vũ Hải Đăng
Mã sinh viên: B23DCKH018
Bài : 011
*/
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
long long solve(long long a[],int n){
    long long sum = 0;
    for(int i = 0;i < n;++i){
        sum += (a[i]*a[i]);
    }
    return sum;
}
int main() {
	int n;
    scanf("%d",&n);
    long long a[n];
    for(int i = 0;i < n;++i){
        scanf("%lld",&a[i]);
    }
    printf("%lld ",solve(a,n));
}