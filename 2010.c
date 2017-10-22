#include <stdio.h>
#include <math.h>
int main(void) {
	int m,n,s,i,t;
	while(scanf("%d %d",&m,&n)!=EOF) {
		t=0;
		for(i=m; i<=n; i++) {
			if( (pow((i/100%10),3)+pow((i/10%10),3)+pow((i/1%10),3))==i) {
				t++;
				if(t==1) {
					printf("%d",i);
				}else{
					printf(" %d",i);
				}
			}
		}

		if(t<=0)
			printf("no");
		printf("\n");
	}
	return 0;
}
