#include <math.h>
#include <stdio.h>
int main()
{
float x1, y1, x2, y2;
float d = 0;
while(scanf("%f%f%f%f",&x1,&y1,&x2,&y2)!=EOF)
{
d = sqrtf((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
printf("%.2f\n", d);
}
return 0;
}
