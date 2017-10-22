#include <stdio.h>
#include <math.h>
int main(void){
	int n,m,i;
	float sum,c;
	while(scanf("%d %d",&n,&m)!=EOF){
		sum =0;
		c=n;
		for(i=1;i<=m-1;i++){
			sum+=c=sqrt(c);
		}
		sum+=n;
		printf("%.2f\n",sum);
	}
	return 0;
}
