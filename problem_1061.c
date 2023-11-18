#include<stdio.h>
int main()
{
    int d1,h1,m1,s1,d_s1,days,hours;
    int d2,h2,m2,s2,d_s2,min,sec,n;
    scanf("%*s %d",&d1);
    scanf("%d %*s",&h1);
    scanf("%d %*s",&m1);
    scanf("%d",&s1);

    scanf("%*s %d",&d2);
    scanf("%d %*s",&h2);
    scanf("%d %*s",&m2);
    scanf("%d",&s2);

    d_s1 = ((86400 * d1) + (3600 * h1) + (60 * m1) + s1);
    d_s2 = ((86400 * d2) + (3600 * h2) + (60 * m2) + s2);

    n = d_s2 - d_s1;
    days = n/86400;
    n = n%86400;
    hours = n/3600;
    n = n%3600;
    min = n/60;
    sec =  n%60;

    printf("%d dia(s)\n",days);
    printf("%d hora(s)\n",hours);
    printf("%d minuto(s)\n",min);
    printf("%d segundo(s)\n",sec);

    return 0;
}