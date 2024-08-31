/*
Họ Tên: Đỗ Vũ Hải Đăng
Mã sinh viên: B23DCKH018
Bài : 016
*/
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
int main() {
	int n,m;
    scanf("%d %d",&n,&m);
    int a[n][m];
    for(int i = 0;i < n;++i){
        for(int j = 0;j < m;++j){
            scanf("%d",&a[i][j]);
        }
    }
    int cnt = 0;
    for(int i = 0;i < n;++i){
        for(int j = 0;j < m;++j){
            if(a[i][j] % 2 == 0) {
                cnt++;
            }
        }
    }
    printf("%d",cnt);
}