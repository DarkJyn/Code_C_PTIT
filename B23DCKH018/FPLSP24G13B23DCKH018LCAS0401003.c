/*
Họ Tên: Đỗ Vũ Hải Đăng
Mã sinh viên: B23DCKH018
Bài : 003
*/

#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
int solve(int a[],int n,int k){
    for(int i = 0;i < n;++i){
        if(a[i] == k ) return 1;
    }
    return 0;
}
int main() {
	int n;
    int k;
    scanf("%d %d",&n,&k);
    int a[n];
    for(int i = 0;i < n;++i){
        scanf("%d",&a[i]);
    }
    printf("%d",solve(a,n,k));
}