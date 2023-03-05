#include <stdio.h>
 
int main() {
int D,ano,mes,dia;
scanf("%d",&D);
ano = D/365;
D = D%365;
mes = D/30;
dia = D%30;
printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",ano,mes,dia);
 
    return 0;
}