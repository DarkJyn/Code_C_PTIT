/*
Họ Tên: Đỗ Vũ Hải Đăng
Mã sinh viên: B23DCKH018
Bài : 021
*/
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
int main() {
	// Nhập giá trị của n qua con trỏ ptr 
    int n;
    int *ptr = &n;
    scanf("%d",ptr);
    printf("%d ",n);
    // Xuất giá trị vùng nhớ qua con trỏ;
    printf("%d",*ptr);
}