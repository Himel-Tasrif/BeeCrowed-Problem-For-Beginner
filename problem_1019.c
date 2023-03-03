#include <stdio.h>
 
int main(){
    int N,h=0,m=0,s=0;
scanf("%d",&N);
h = N/3600;
N = N%3600;
m = N/60;
s = N%60;
h:m:s;
printf("%d:%d:%d\n",h,m,s);
    return 0;
}