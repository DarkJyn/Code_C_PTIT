#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
int maxmu;
int pt[10005];
/*
Em dùng strtok để cắt chuỗi lấy các chữ số (hàm atoi để chuyển về định dạng số)
Các chữ số thứ chẵn là hệ số, số ở vị trí thứ lẻ là số mũ ( em đếm từ 0)
Tạo mảng lưu kết quả, index là số mũ, giá trị là tổng hệ số
*/
void solve(char a[]) {
	int k=0;
	char *tok = strtok(a, " *x^+");
	int heso, mu;
	while(tok!=NULL) {
		mu=atoi(tok);
		if(k==1) maxmu=fmax(maxmu, mu);
		if(k%2) {
			pt[mu]+=heso;
		}
		++k;
		heso=mu;
		tok = strtok(NULL," *x^+");
	}
}

int main() {
	int t;
	scanf("%d\n",&t);
	while(t--) {
		maxmu=0;
		memset(pt, 0, sizeof(pt));
		char s1[10000], s2[10000];
		gets(s1);
		gets(s2);
		solve(s1);
		solve(s2);
		printf("%d*x^%d", pt[maxmu], maxmu);
		for(int i=maxmu-1; i>=0; --i) {
			if(pt[i]) printf(" + %d*x^%d", pt[i], i);
		}
		printf("\n");
	}
}