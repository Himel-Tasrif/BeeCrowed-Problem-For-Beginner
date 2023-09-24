#include<stdio.h>
int main()
{
    int sh,sm,eh,em,r,h,f;
    scanf("%d %d %d %d",&sh,&sm,&eh,&em);
    if(sm > em)
    {
        eh = eh-1;
        //em = (em+60);
        r = (em+60) - sm;
        //f = eh-sh;

        if(sh>eh)
        {
            //eh = eh+24;

            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",(eh+24)-sh,r);
        }
        else
        {
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",(eh-sh),r);
        }

    }
    else if((sh == eh) && (sm == em))
    {
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    }

    else if(sm<em)
    {
        h = em-sm;
        if(sh>eh)
        {
            //eh = eh+24;

            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",(eh+24)-sh,h);
        }
        else
        {
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",(eh-sh),h);
        }

    }

    return 0;
}