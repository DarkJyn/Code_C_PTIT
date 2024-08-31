/*
Họ Tên: Đỗ Vũ Hải Đăng
Mã sinh viên: B23DCKH018
Bài : 004
*/

#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
int solve(int a[],int n){
    int cnt = 0;
    for(int i = 0;i < n;++i){
        if(a[i] % 2 == 0 ) cnt++;
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