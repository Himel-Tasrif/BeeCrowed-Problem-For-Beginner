#include<stdio.h>
int main()
{
    float n1,n2,n3,n4,h;
    double avg,avg2;
    //printf("Enter four marks: ");
    scanf("%f %f %f %f",&n1,&n2,&n3,&n4);
    avg = ((n1*2)+(n2*3)+(n3*4)+n4)/10;
    printf("Media: %.1lf\n",avg);
    if(avg>=7.0)
    {
        printf("Aluno aprovado.\n");
    }
    else if(avg<5.0)
    {
        printf("Aluno reprovado.\n");
    }
    else if(avg>=5.0 && avg<=6.9)
    {
        printf("Aluno em exame.\n");
        //sum = avg + 1;
        scanf("%f",&h);
        printf("Nota do exame: %.1lf\n",h);
       // scanf("%f",&h);
        avg2 = (avg + h)/2;
        if(avg2>=5.0)
        {
            printf("Aluno aprovado.\n");
        }
        else if(avg2<=4.9)
        {
            printf("Aluno reprovado.\n");
        }

        printf("Media final: %.1lf\n",avg2);
    }
    return 0;
}