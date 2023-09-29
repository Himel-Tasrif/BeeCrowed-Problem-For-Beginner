#include<stdio.h>
int main()
{
    float a,p1,sum=0;

    scanf("%f",&a);
    if(a>=0 && a<=400.00)
    {
        p1 = 400.00 * 0.15;
        sum = a + p1;
        printf("Novo salario: %.2f\n",sum);
        printf("Reajuste ganho: %.2f\n",p1);
        printf("Em percentual: 15 %%\n");

    }

    else if(a>=400.01 && a<=800.00)
    {
        p1 = a * 0.12;
        sum = a + p1;
        printf("Novo salario: %.2f\n",sum);
        printf("Reajuste ganho: %.2f\n",p1);
        printf("Em percentual: 12 %%\n");

    }

    else if(a>=800.01 && a<=1200.00)
    {
        p1 = a * 0.10;
        sum = a + p1;
        printf("Novo salario: %.2f\n",sum);
        printf("Reajuste ganho: %.2f\n",p1);
        printf("Em percentual: 10 %%\n");

    }

    else if(a>=1200.01 && a<=2000.00)
    {
        p1 = a * 0.07;
        sum = a + p1;
        printf("Novo salario: %.2f\n",sum);
        printf("Reajuste ganho: %.2f\n",p1);
        printf("Em percentual: 7 %%\n");

    }
    else if(a>2000)
    {
        p1 = a * 0.04;
        sum = a + p1;
        printf("Novo salario: %.2f\n",sum);
        printf("Reajuste ganho: %.2f\n",p1);
        printf("Em percentual: 4 %%\n");
    }

    return 0;
}