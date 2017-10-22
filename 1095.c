#include <stdio.h>
int main(void){
	int a,b;
	while(scanf("%d %d",&a,&b)!=EOF){
		if(a+b==0) continue;
		printf("%d\n\n",a+b);
	}
}
