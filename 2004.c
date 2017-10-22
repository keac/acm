#include <stdio.h>
#include <string.h>
int main(void) {
	int num;
	char *c;
	while(scanf("%d",&num)!=EOF) {
		if(num>=0&&num<=100){
		num/=10;
		switch(num) {
			case 10:
			case 9:
				c="A";
				break;
			case 8:
				c="B";
				break;
			case 7:
				c="C";
			case 6:
				c="D";
				break;
			default:
				c="E";
				break;
		}
		}else{
			c="Score is error!";
		}
		printf("%s\n",c);
	}
	return 0;
}

