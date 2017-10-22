#include <stdio.h>
#include <math.h>
int main(void){
	int m,n,x,y,i,c,temp;
	while(scanf("%d %d",&m,&n)!=EOF){
		x=y=0;
		if(m>n){
			temp=m;
			m=n;
			n=temp;
		}
		for(i=m;i<=n;i++){
			if(i%2==0){
				x+=pow(i,2);
			}else{
				y+=pow(i,3);
			}
		}
		printf("%d %d\n",x,y);
	}
	return 0;
}
