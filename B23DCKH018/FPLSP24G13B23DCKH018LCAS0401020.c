/*
Họ Tên: Đỗ Vũ Hải Đăng
Mã sinh viên: B23DCKH018
Bài : 020
*/

#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
int main() {
	long long n,m;
    scanf("%lld %lld",&n,&m);
    long long a[n][m];
    getchar();
    char rule;
    long long index;
    scanf("%c %lld",&rule,&index);
    for(long long i = 0;i < n;++i){
        for(long long j = 0;j < m;++j){
            scanf("%lld",&a[i][j]);
        }
    }
    if(rule == 'h'){
        long long sum = 0;
        for(long long i = 0;i < m-1;++i){
            if(a[index - 1][i]*a[index - 1][i+1] < 0) sum++;
        }
        printf("%lld",sum);
    }
    else if(rule == 'c'){
        long long sum = 0;
        for(long long i = 0;i < n-1;++i){
            if(a[i][index - 1] * a[i+1][index - 1] < 0) sum++;
        }
        printf("%lld",sum);
    }
}