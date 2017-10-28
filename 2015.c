#include <stdio.h>
int main(void) {
	int n,m,i,c,d,e;
	while(scanf("%d%d",&n,&m)!=EOF) {
		e=m+(n-1)*m;
		c=0;
		for(i=2; i<=e; i+=2) {
			c++;
			if(c%m&&i!=e) {
				d=(i*m+m)/m;
				printf("%d ",d);
			}
		}
		if(n%m!=0) {
			printf("%d\n",e);
		}else{
			printf("\n");
		}
	}
	return 0;
}
