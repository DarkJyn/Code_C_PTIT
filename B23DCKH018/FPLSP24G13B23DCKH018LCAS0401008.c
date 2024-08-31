/*
Họ Tên: Đỗ Vũ Hải Đăng
Mã sinh viên: B23DCKH018
Bài : 008
*/
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
void solve(int a[],int n){
    for(int i = 1;i < n;++i){
        int tmp = a[i];
        int idx = i - 1;
        while(idx >= 0 && a[idx] > tmp){
            a[idx + 1] = a[idx];
            idx--;
        }
        a[idx+1] = tmp;
    }
}
int main() {
	int n;
    scanf("%d",&n);
    int a[n];
    for(int i = 0;i < n;++i){
        scanf("%d",&a[i]);
    }
    solve(a,n);
    for(int i = 0;i < n;++i){
        printf("%d ",a[i]);
    }
}