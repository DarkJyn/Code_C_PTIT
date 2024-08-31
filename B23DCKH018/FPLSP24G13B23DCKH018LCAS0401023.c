/*
Họ Tên: Đỗ Vũ Hải Đăng
Mã sinh viên: B23DCKH018
Bài : 023
*/
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
int main() {
    // cấp phát động mảng có 1 tỷ phần tử
    int *ptr = (int*)malloc(1000000000 * sizeof(int));
    int n;
    scanf("%d",&n);
    for(int i = 0;i < n;++i){
        scanf("%d",ptr+i);
    }
    for(int i = 0;i < n;++i){
        printf("%d ",*(ptr+i));
    }
    
}