#include <stdio.h>

int main() {
	int n;
	scanf("%d",&n);
	int arr[n];
	int check[100000]= {};
	int max=0;
	int cnt=0;
	for(int i=0; i<n; i++) {
		scanf("%d",&arr[i]);
		check[arr[i]]++;
		if(check[arr[i]]==2) cnt++;
		if(arr[i]>max) max=arr[i];
	}
	printf("%d\n",cnt);
	if(cnt) {
		for(int i=0; i<n; i++) {
			if(check[arr[i]]>1) {
				printf("%d ",arr[i]);
				check[arr[i]]=1;
			}
		}
	}
}