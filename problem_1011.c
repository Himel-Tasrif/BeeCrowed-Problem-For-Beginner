#include <stdio.h>
 
int main() {
float R;
double VOLUME;
scanf("%f",&R);
VOLUME = ((4/3.0)*3.14159*R*R*R);
printf("VOLUME = %.3lf\n",VOLUME);
 return 0;
}