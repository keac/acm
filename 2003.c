#include <math.h>
#include <stdio.h>
int main()
{
double  n;
while(scanf("%lf",&n)!=EOF)
{
	n=fabs(n);
	printf("%.2lf\n",n);
}
return 0;
}
