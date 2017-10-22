#include <stdio.h>
int main(void){
	int n,u,product;
	while(scanf("%d",&n)!=EOF&&n){
		product=1;
		while(n--){
			scanf("%d",&u);
			if(u%2!=0)
			product*=u;
		}
		printf("%d\n",product);
	}
	return 0;
}
