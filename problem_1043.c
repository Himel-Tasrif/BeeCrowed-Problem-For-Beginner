#include<stdio.h>
int main()
{
    float a,b,c,h,r,t,sum=0,area;
    scanf("%f %f %f",&a,&b,&c);
    h = b + c;
    r = a + b;
    t = a + c;
    if((h > a) && (r > c) && (t > b))
    {
        sum = a + b + c;
        printf("Perimetro = %.1f\n",sum);
    }
    else{
        area = (c*(a+b))/2;
        printf("Area = %.1f\n",area);
    }
    return 0;
}