/*
Họ Tên: Đỗ Vũ Hải Đăng
Mã sinh viên: B23DCKH018
Bài : 022
*/
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
int main() {
    int n;
    scanf("%d",&n);
    // tên mảng như 1 con trỏ
    int ptr[n];
    for(int i = 0;i < n;++i){
        scanf("%d",ptr + i);
    }
    // truy xuất đến phần từ thứ i
    for(int i = 0;i < n;++i){
        printf("%d ", *(ptr+i));
    }
    
}