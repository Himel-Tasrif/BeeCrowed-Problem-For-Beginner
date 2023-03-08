#include<stdio.h>
#include<math.h>
int main()
{
    double A,B,C;
    double h,R1,R2;
    scanf("%lf %lf %lf",&A,&B,&C);
    h = ((pow(B,2)-4*A*C));
    R1 = (-B+sqrt(h))/(2*A);
    R2 = (-B-sqrt(h))/(2*A);
    if(A!=0&&h>0){
    printf("R1 = %.5lf\n",R1);
    printf("R2 = %.5lf\n",R2);
    }
    else
    {
        printf("Impossivel calcular\n");
    }
    return 0;
}