#include<stdlib.h>
#include<stdio.h>

int main()
{
    int H1,M1,H2,M2;
    do
    {
        do
        {
            scanf("%d %d %d %d",&H1,&M1,&H2,&M2);
        }
        while((0>H1||H1>23)||(0>M1||M1>59)||(0>H2||H2>23)||(0>M2||M2>59));
        if((H1==0&&M1==0)&&(H2==0&&M2==0))
            break;
        if(H1<H2)
        {
            if(M1>M2)
            {
                printf ("%d\n",(H2-H1-1)*60+60-M1+M2);
            }
            else
            {
                printf ("%d\n",(H2-H1)*60+M2-M1);
            }




        }
        else if(H1==H2)

        {
            if(M1>M2)
            {
                printf ("%d\n",(23)*60+60-M1+M2);
            }
            else
            {
                printf ("%d\n",(H2-H1)*60+M2-M1);

            }

        }



        else
        {

            if(M1>M2)
            {
                printf("%d\n",(23-H1+H2)*60+60-M1+M2);
            }
            else
            {
                {
                    printf("%d\n",(24-H1+H2)*60+M2-M1);
                }


            }




        }
    }
    while(((H1!=0||M1!=0))||((H2!=0||M2!=0)));
    printf("%d %d %d %d\n",H1,M1,H2,M2);
}
