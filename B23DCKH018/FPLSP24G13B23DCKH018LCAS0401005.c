/*
Họ Tên: Đỗ Vũ Hải Đăng
Mã sinh viên: B23DCKH018
Bài : 005
*/

#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
int check(int n){
    if(n<2) return 0;
    for(int i = 2;i <= sqrt(n);++i){
        if(n % i == 0) return 0;
    }
    return 1;
}
int solve(int a[],int n){
    int cnt = 0;
    for(int i = 0;i < n;++i){
        if(check(a[i])) cnt++;
    }
    return cnt;
}
int main() {
	int n;
    scanf("%d",&n);
    int a[n];
    for(int i = 0;i < n;++i){
        scanf("%d",&a[i]);
    }
    printf("%d",solve(a,n));
}