#include<stdio.h>
int main()
{
    float a,b;
    scanf("%f %f",&a,&b);
    if(a>0.0 && b<0.0)
    {
        printf("Q4\n");
    }
    else if(a>0.0 && b>0.0)
    {
        printf("Q1\n");
    }
    else if(a<0.0 && b<0.0)
    {
        printf("Q3\n");
    }
    else if(a<0.0 && b>0.0)
    {
        printf("Q2\n");
    }
    else if(a == 0.0)
    {
        if(b == 0.0) 
        printf("Origem\n");
        else
            printf("Eixo Y\n");
    }
        else if(b == 0.0)
    {
        if(a == 0.0) 
        printf("Origem\n");
        else
            printf("Eixo X\n");
    }
   return 0;
}