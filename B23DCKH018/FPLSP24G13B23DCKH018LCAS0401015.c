/*
Họ Tên: Đỗ Vũ Hải Đăng
Mã sinh viên: B23DCKH018
Bài : 015
*/
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
int main() {
	int n,m,k;
    scanf("%d %d %d",&n,&m,&k);
    int a[n][m];
    for(int i = 0;i < n;++i){
        for(int j = 0;j < m;++j){
            scanf("%d",&a[i][j]);
        }
    }
    for(int i = 0;i < n;++i){
        for(int j = 0;j < m;++j){
            if(a[i][j] == k) {
                printf("1");
                return 0;
            }
        }
    }
    printf("0");
}