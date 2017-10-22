#include <stdio.h>
int main(void){
	int n,a,b,c;
	float v;
	while(scanf("%d",&n)!=EOF&&n){
		a=b=c=0;
		if(n==0)
		break;
		while(n--){
			scanf("%f",&v);
			if(v<0){
				a++;
			}else if(v==0){
				b++;
			}else if(v>0){
				c++;
			}else{
				printf("error");
			}
		}
		printf("%d %d %d\n",a,b,c);
	}
	return 0;
}
