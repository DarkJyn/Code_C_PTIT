#include <stdio.h>

int main() {
	int a,b;
	scanf("%d%d",&a,&b);
	for(int i=a; i>=1; i--) {
		int tmp=i;
		if(tmp>b) tmp=b;
		for(int j=1; j<=b; j++) {
			if(tmp<b) {
				printf("%c",tmp+64);
				tmp++;
			} else printf("%c",tmp+64);
		}
		printf("\n");
	}
}