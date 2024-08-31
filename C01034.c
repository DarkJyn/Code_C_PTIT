#include <stdio.h>
#include <math.h>

int main() {
	int a,b;
	scanf("%d%d",&a,&b);
	int count=0;
	int arr[100000];
	for(int i=1; i<=sqrt(b); i++) {
		if(i*i>=a) arr[count++]=i*i;
	}
	printf("%d\n",count);
	for(int i=0; i<count; i++) printf("%d\n",arr[i]);
    return 0;
}