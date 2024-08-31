/*
Họ Tên: Đỗ Vũ Hải Đăng
Mã sinh viên: B23DCKH018
Bài : 012
*/
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
int solve(long long a[],int n){
    long long sum = 0;
    for(int i = 0;i < n-1;++i){
        if(a[i] * a[i+1] < 0) sum++;
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