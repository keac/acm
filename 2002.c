#include <math.h>
#include <stdio.h>
#define PI 3.1415927
int main()
{
double r,v;
while(scanf("%lf",&r)!=EOF)
{
	v=PI*r*r*r*4/3;
	printf("%.3lf\n",v);
}
return 0;
}
