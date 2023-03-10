#include <stdio.h>
 
int main() {
 
   int X,Y;
    float H;
    scanf("%d %d",&X,&Y);
    /*scanf("%d %d",&X,&Y);
    float R[5]={4.00,4.50,5.00,2.00,1.50};
    snak = R[X-1]*Y;
    printf("Total: R$ %.2f\n",snak);*/
    if(X==1)
    {
      H = Y*4.00;
      printf("Total: R$ %.2f\n",H);
    }
    else if(X==2)
    {
        H = Y*4.50;
        printf("Total: R$ %.2f\n",H);
    }
     else if(X==3)
    {
        H = Y*5.0;
        printf("Total: R$ %.2f\n",H);
    }
     else if(X==4)
    {
        H = Y*2.00;
        printf("Total: R$ %.2f\n",H);
    }
     else if(X==5)
    {
        H = Y*1.50;
        printf("Total: R$ %.2f\n",H);
    }
    return 0;
}