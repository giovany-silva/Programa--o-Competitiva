#include<stdlib.h>
int main()
{
    int hi,mi,hf,mf;


    do{scanf("%d %d %d %d",&hi,&mi,&hf,&mf);}while(((hi<0||hi>24)||(mi<0||mi>24))||((hf<0||hf>24)||(mf<0||mf>24)));
    if(hi<hf)
    {
        if(mi>mf)
        {
            printf ("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",hf-hi-1,60-mi+mf);
        }
        else
        {
            printf ("O JOGO DUROU %d HORA(S)",hf-hi);
            printf (" E %d MINUTO(S)\n",mf-mi);
        }




    }
    else if(hi==hf)

    {
        if(mi>mf)
        {
            printf ("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",hf-hi,60-mi+mf);
        }
        else
        {
            printf ("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",24,0);
        }
    }


    else
    {

        if(mi>mf)
        {
            printf("O JOGO DUROU %d HORA(S)",24-hi+hf-1);
            printf (" E %d MINUTO(S)\n",60-mi+mf);
        }
        else
        {
            {
                printf("O JOGO DUROU %d HORA(S)",24-hi+hf);
                printf (" E %d MINUTO(S)\n",mf-mi);
            }


        }




    }
return 0;
}
