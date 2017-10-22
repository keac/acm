#include <stdio.h>
int main(void){       
    int n,i,s=0,t,j;
    scanf("%d",&t);
    for(j=1;j<=t;j++){
	scanf("%d",&n);
		s=0;
		while(n--)
		{
			scanf("%d",&i);
			s+=i;
		}
		printf("%d\n",s);
		if(j!=t){
			printf("\n");
		}
		}
	return 0;
}
