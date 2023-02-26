#include <stdio.h>
#include <math.h>
 
int main()
{
int a,b,c,d;
scanf("%d %d %d",&a,&b,&c);
d = (a+b+abs(a-b))/2;
d = (c+d+abs(c-d))/2;
printf("%d eh o maior\n",d);
return 0;
}