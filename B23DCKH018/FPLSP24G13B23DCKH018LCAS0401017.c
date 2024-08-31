/*
Họ Tên: Đỗ Vũ Hải Đăng
Mã sinh viên: B23DCKH018
Bài : 017
*/

#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
int primeCheck(int n){
    if (n == 2 || n == 3)
        return 1;
    if (n < 3 || n % 2 == 0 || n % 3 == 0)
        return 0;
    for (int i = 5; i * i <= n; i += 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return 0;
    return 1;
}
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
            if(primeCheck(a[i][j])) {
                cnt++;
            }
        }
    }
    printf("%d",cnt);
}