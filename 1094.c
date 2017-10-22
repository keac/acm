
#include <stdio.h>
int main(void){       
    int n,i,s=0;
	while (scanf("%d",&n)!=EOF){
	
		s=0;
		while(n--)
		{
			scanf("%d",&i);
			s+=i;
		}
		printf("%d\n",s);
	}
	return 0;
}
