#include<stdio.h>
#include<stdlib.h>
int main()
{
    double N1,N2,N3,N4,N5,media;
    scanf("%lf %lf %lf %lf",&N1,&N2,&N3,&N4);
    media=(N1*2+N2*3+N3*4+N4)/10.0;
    if(media>=7.0)
    {
        printf("Media: %.1lf\nAluno aprovado.\n",media);
    }
    else if(media<5.0)
    {
        printf("Media: %.1lf\nAluno reprovado.\n",media);
    }
    else if(media>=5.0&&media<=6.9)
    {printf("Media: %.1lf\n",media);
        printf("Aluno em exame.\n");
        scanf("%lf",&N5);
        printf("Nota do exame: %.1lf\n",N5);
        media=(media+N5)/2.0;
        if(media>=5.0)
        {
            printf("Aluno aprovado.\n");


 printf("Media final: %.1lf\n",media);}
        else if(media<=4.9)
        {
            printf("Aluno reprovado.\n");


 printf("Media final: %.1lf\n",media); }
    }


    return 0;
}
