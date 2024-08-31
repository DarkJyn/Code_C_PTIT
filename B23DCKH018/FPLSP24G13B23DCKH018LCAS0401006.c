/*
Họ Tên: Đỗ Vũ Hải Đăng
Mã sinh viên: B23DCKH018
Bài : 006
*/
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
void solve(int a[],int n){
    for(int i = 0;i < n - 1;++i){
        for(int j = 0;j < n - i - 1;++j){
            if(a[j] > a[j+ 1]){
                int tmp = a[j];
                a[j] = a[j+1];
                a[j+1] = tmp;
            }
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