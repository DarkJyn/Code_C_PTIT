/*
Lựa chọn 1: Em nhập vào 3 thông tin sinh viên rồi in ra số lượng sinh viên
Lựa chọn 2: In ra thông tin sau khi sửa của sinh viên có index nhập vào
Lựa chọn 3: In ra điểm sinh viên thỏa mãn điều kiện
*/



#include <stdio.h>
#include <math.h>
#include <string.h>

typedef struct SinhVien {
	int masv;
	char name[50];
	double d1, d2, d3;
} sv;

int index=1;

int check(sv a) {
	if(a.d1<=a.d2 && a.d2<=a.d3) return 1;
	return 0;
}

void nhap(sv *a) {
	gets(a->name);
	scanf("%lf%lf%lf\n",&a->d1, &a->d2, &a->d3);
}

sv arr[10000];

int main() {
	int n;
	while(scanf("%d\n",&n)!=-1) {
		if(n==1) {
			int a;
			scanf("%d\n",&a);
			for(int i=0; i<a; i++) {
				nhap(&arr[index]);
				arr[index].masv=index;
				index++;
			}
			printf("%d\n",a);
		} else if(n==2) {
			int sua;
			scanf("%d\n",&sua);
			nhap(&arr[sua]);
			printf("%d\n",sua);
		} else {
			for(int i=index-1; i>=1; i--) {
				if(check(arr[i])) printf("%d %s %.1lf %.1lf %.1lf\n", arr[i].masv, arr[i].name, arr[i].d1, arr[i].d2, arr[i].d3);
			}
		}
	}
}