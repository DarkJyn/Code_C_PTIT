/*
Họ Tên: Đỗ Vũ Hải Đăng
Mã sinh viên: B23DCKH018
Bài : 019
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
        for(long long i = 0;i < m;++i){
            sum += (a[index - 1][i]*a[index - 1][i]);
        }
        printf("%lld",sum);
    }
    else if(rule == 'c'){
        long long sum = 0;
        for(long long i = 0;i < n;++i){
            sum += (a[i][index - 1] * a[i][index - 1]);
        }
        printf("%lld",sum);
    }
}