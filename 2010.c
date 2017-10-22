#include <stdio.h>
#include <math.h>
int main(void){
	int m,n,s,i,t,e,j,b;
	int num[]; 
	while(scanf("%d %d",&m,&n)!=EOF){
		t=0;
		for(i=m;i<=n;i++){
			if( (pow((i/100%10),3)+pow((i/10%10),3)+pow((i/1%10),3))==i){
				num[t]=i;
				t++;
			}
		}
		  for(e = 0; e < t; i++){
        for(j = 0; i + j < n - 1; j++){
            if(num[j] > num[j + 1])
            {
                int temp = num[j];
                num[j] = num[j + 1];
                num[j + 1] = temp;
            }
            Printf(num, n);
			}
		}
		if(t<=0)
		printf("no");
		for (b=0;b<t;b++){
			printf("%d",num[b]);
		}
		printf("\n");
	}
	return 0;
}
