#include <stdio.h>
 
int main(){
     int a,b,NUMBER;
    float c,SALARY;
    scanf("%d %d %f",&a,&b,&c);
    NUMBER = a;
    SALARY = b*c;
    printf("NUMBER = %d\n",NUMBER);
    printf("SALARY = U$ %.2f\n",SALARY);
    return 0;

}