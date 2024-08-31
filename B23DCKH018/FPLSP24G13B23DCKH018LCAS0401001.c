/*
Họ Tên: Đỗ Vũ Hải Đăng
Mã sinh viên: B23DCKH018
Bài : 001
*/

#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
int solve(int a[],int n){
    int max = a[0];
    for(int i = 0;i < n;++i){
        if(a[i] > max ) max = a[i];
    }
    return max;
}
int main() {
	int n;
    scanf("%d",&n);
    int a[n];
    for(int i = 0;i < n;++i){
        scanf("%d",&a[i]);
    }
    int tmp = solve(a,n);
    printf("%d",tmp);
}