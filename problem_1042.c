#include<stdio.h>
int main()
{
    int a[3],temp,b[3];
    for(int i=0; i<3; i++)
    {
        scanf("%d",&b[i]);
    }
    for(int i=0; i<3; i++)
    {
        a[i] = b[i];
    }

    for(int i=0; i<2; i++)
    {
        for(int j=0; j<=i; j++)
        {
            if(a[i+1] < a[i])
            {
                temp = a[i];
                a[i] = a[i+1];
                a[i+1] = temp;
            }
        }
    }

        for(int i=0; i<2; i++)
    {
        for(int j=0; j<=i; j++)
        {
            if(a[i+1] < a[i])
            {
                temp = a[i];
                a[i] = a[i+1];
                a[i+1] = temp;
            }
        }
    }

    for(int i=0; i<3; i++)
    {
        printf("%d\n",a[i]);
    }
    printf("\n");

        for(int i=0; i<3; i++)
    {
        printf("%d\n",b[i]);
    }



    return 0;
}