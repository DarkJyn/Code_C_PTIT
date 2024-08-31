/*
Họ Tên: Đỗ Vũ Hải Đăng
Mã sinh viên: B23DCKH018
Bài : 007
*/
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
void solve(int a[],int n){
    for(int i = 0;i < n - 1;++i){
        int tmp = i;
        for(int j = i + 1;j < n;++j){
            if(a[j] < a[tmp]){
                tmp = j;
            }
        }
        if(tmp != i){
            int res = a[tmp];
            a[tmp] = a[i];
            a[i] = res;
        }
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