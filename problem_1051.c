#include<stdio.h>
int main()
{
    float a,p,h,r,m,sum=0;
    scanf("%f",&a);
    if(a>=0.00 && a<=2000.00)
    {
        printf("Isento\n");
    }
    else if(a>=2000.01 && a<=3000.00)
    {
        //h = 1000 * 0.08;
        r = a - 2000.00;
        p = r * 0.08;
        printf("R$ %.2f\n",p);
    }
    else if(a>=3000.01 && a<=4500.00)
    {
        h = 1000 * 0.08;
        r = a - 3000.00;
        p = r * 0.18;
        sum = h + p;
        printf("R$ %.2f\n",sum);
    }
    else if(a>4500.00)
    {
        h = 1000 * 0.08;
        m = 1500 * 0.18;
        r = a - 4500.00;
        p = r * 0.28;
        sum = h + m + p;
        printf("R$ %.2f\n",sum);
    }
    return 0;
}