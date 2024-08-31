#include <stdio.h>
#include <math.h>

int main() {
	int t;
	scanf("%d",&t);
	while(t--){
		int x1,y1,x2,y2;
		scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
		int x3 = x1, y3 = y2;
		float kc1 = sqrt(1.0*(x1-x3)*(x1-x3)+1.0*(y1-y3)*(y1-y3))*sqrt(2);
		float kc2 = sqrt(1.0*(x1-x2)*(x1-x2)+1.0*(y1-y2)*(y1-y2));
		if(kc1 == kc2) printf("YES\n");
		else printf("NO\n");
	}
}