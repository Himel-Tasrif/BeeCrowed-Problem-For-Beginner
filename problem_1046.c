#include<stdio.h>
//#include<time.h>

int main()
{
    int a,b,h,r;
    scanf("%d %d",&a,&b);

    if(a==b || b==a)
    {
        printf("O JOGO DUROU 24 HORA(S)\n");
    }
    else if(a>b)
    {
        h = (b+24)-a;
        printf("O JOGO DUROU %d HORA(S)\n",h);
    }
    else if(a<b)
    {
        r = b-a;
        printf("O JOGO DUROU %d HORA(S)\n",r);
    }

    return 0;
}