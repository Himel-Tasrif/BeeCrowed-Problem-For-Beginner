#include<stdio.h>
int main()
{
    double a,b,c,h[3],temp,x,y,z;
    for (int i=0; i<3; i++)
    {
        scanf("%lf",&h[i]);
    }

    for(int i=0; i<2; i++)
    {
        for(int j=0; j<=i; j++)
        {
            if(h[i+1] > h[i])
            {
                temp = h[i+1];
                h[i+1] = h[i];
                h[i] = temp;
            }
        }
    }

    for(int i=0; i<2; i++)
    {
        for(int j=0; j<=i; j++)
        {
            if(h[i+1] > h[i])
            {
                temp = h[i+1];
                h[i+1] = h[i];
                h[i] = temp;
            }
        }
    }
    //for(int i=0; i<3; i++)
    //printf("%.1lf\n",h[i]);

    a = h[0];
    b = h[1];
    c = h[2];
    x = (b + c);
    y = a * a;
    z = (b*b) + (c*c);

    if(a >= x)
        {
            printf("NAO FORMA TRIANGULO\n");
             if((a==b) && (b==c) && (c==a))
    {
        printf("TRIANGULO EQUILATERO\n");
    }
    else if((a==b) || (b==c) || (c==a))

    {
        printf("TRIANGULO ISOSCELES\n");
    }
        }
    else if(y == z)
    {
        printf("TRIANGULO RETANGULO\n");

    if((a==b) && (b==c) && (c==a))
    {
        printf("TRIANGULO EQUILATERO\n");
    }
    else if((a==b) || (b==c) || (c==a))

    {
        printf("TRIANGULO ISOSCELES\n");
    }
    }
    else if(y > z)
    {
        printf("TRIANGULO OBTUSANGULO\n");

    if((a==b) && (b==c) && (c==a))
    {
        printf("TRIANGULO EQUILATERO\n");
    }
    else if((a==b) || (b==c) || (c==a))

    {
        printf("TRIANGULO ISOSCELES\n");
    }
    }
    else if(y < z)
    {
        printf("TRIANGULO ACUTANGULO\n");

    if((a==b) && (b==c) && (c==a))
    {
        printf("TRIANGULO EQUILATERO\n");
    }
    else if((a==b) || (b==c) || (c==a))

    {
        printf("TRIANGULO ISOSCELES\n");
    }
    }
    return 0;
}