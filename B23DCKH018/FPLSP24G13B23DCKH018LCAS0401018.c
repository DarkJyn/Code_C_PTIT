/*
Họ Tên: Đỗ Vũ Hải Đăng
Mã sinh viên: B23DCKH018
Bài : 018
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
    getchar();
    char rule;
    int index;
    scanf("%c %d",&rule,&index);
    for(int i = 0;i < n;++i){
        for(int j = 0;j < m;++j){
            scanf("%d",&a[i][j]);
        }
    }
    if(rule == 'h'){
        int sum = 0;
        for(int i = 0;i < m;++i){
            sum += a[index - 1][i];
        }
        printf("%d",sum);
    }
    else if(rule == 'c'){
        int sum = 0;
        for(int i = 0;i < n;++i){
            sum += a[i][index - 1];
        }
        printf("%d",sum);
    }
}