#include <stdio.h>
 
int main() {
    char name[30];
    float a;
    double b,TOTAL;
    gets (name);
    scanf("%f %lf",&a,&b);
    TOTAL = a+(b*15)/100.0;
    printf("TOTAL = R$ %.2f\n",TOTAL);
    return 0;
 
}