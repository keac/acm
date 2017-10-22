#include <stdio.h>
int main(void){
	int i,year,mon,day,sum=0;
	int t[12]={31,28,31,30,31,30,31,31,30,31,30};
	while(scanf("%d/%d/%d",&year,&mon,&day)!=EOF){
		for(i=0;i<=mon-2;i++){
			sum+=t[i];
		}
		if((year%400 == 0 || (year %4 == 0 && year %100 != 0))&&mon>2)
		sum++;
		sum+=day;
		printf("%d\n",sum);
	}
}
