#include<stdlib.h>
#include<stdio.h>
void preencher();
int main()
{
    int v[10],v1[10],i,j;
    preencher();
    printf("Digite dois números.");
    for(i=0; i<10; i++)
    {
        do
        {
            printf("\n\nDIGITE DOIS NUMEROS DE 0 A 4\n\n");
            scanf("%d %d",&v[i],&v1[i]);
        }
        while((v[i]<0||v1[i]<0)||(v[i]>4||v1[i]>4));
        switch(i)
        {
        case 0:
        {
            do
            {
                printf("\n\nDIGITE UMA JOGADA VALIDA\n\n");
                scanf("%d %d",&v[i],&v1[i]);
            }
            while((v[0]!=3&&v1[0]!=2)&&(v[0]!=2)&&(v1[0]!=1));
preencher(v[i],v1[i]);
        }
        case 1:
            {
                do
            {
                printf("\n\nDIGITE UMA JOGADA VALIDA\n\n");
                scanf("%d %d",&v[i],&v1[i]);
            }
            while((v[i]!=2&&v1[i]!=0)&&((v[i]!=0&&v1[i]!=2)&&(v[i]!=4&&v1[i]!=2)));
            preencher(v[i],v1[i]);}
        case 2:{         do
            {
                printf("\n\nDIGITE UMA JOGADA VALIDA");
                scanf("%d %d",&v[i],&v1[i]);
            }
            while((v[i]!=0&&v1[i]!=1)&&((v[i]!=4&&v1[i]!=1)&&((v[i]!=1&&v1[i]!=0)&&(v[i]!=3&&v1[i]!=0))));
            preencher(v[i],v1[i]);}
        case 3:{         do
            {
                printf("\n\nDIGITE UMA JOGADA VALIDA");
                scanf("%d %d",&v[i],&v1[i]);
            }
            while(v[i]!=2&&v1[i]!=2);preencher(v[i],v1[i]);}

        case 4:
        {do
            {
                printf("\n\nDIGITE UMA JOGADA VALIDA");
                scanf("%d %d",&v[i],&v1[i]);
            }
           while(v[i]!=0&&v1[i]!=3);}
        preencher(v[i],v1[i]);}


}


}

void preencher(int a,int b)
{system("cls");
    printf("       \n\nPOSICAO ATUAL (%d) (%d)\n\n",a,b);
    int i,j,M[5][5],p,q;
    p=0;
    q=0;
    for(i=0; i<5; i++)
    {
        p=p+1;
        for(j=0; j<5; j++)
        {
            q=q+1;
            M[i][j]=21-5*i+j;
        }
    }
    printf("\n\n\n\n\n");
    printf("                         _________________________________________\n");
    printf("                        |\____0______1______2_______3_______4____/|\n");



    for(i=0; i<5; i++)
    {
        printf("                        | |     ||      ||      ||      ||      ||\n");
        printf("                        |%i|",i);

        for(j=0; j<5; j++)
        {
            if(j==4)
            {
                if(i<4)
                {
                    if(i==a&&j==b)
                    {
                        printf("     ||\n");
                    }
                    else
                    {
                        printf(" %d  ||\n",M[i][j]);
                    }
                }

                else
                {
                    printf(" %d   ||\n",M[i][j]);
                }

            }

            else if(i>2&&j>=0)
            {
                if(i==a&&j==b)
                {
                    printf("     ||");
                }
                else
                {
                    printf(" %d   || ",M[i][j]);
                }
            }



            else
            {
                if(i==a&&j==b)
                {
                    printf("     ||");
                }
                else
                {
                    printf(" %d  || ",M[i][j]);
                }
            }

        }
        printf("                        | |_____||______||______||______||______||\n");

    }
    printf("                        ");

    for(i=0; i<20; i++)
    {
        printf("==");
    }
    printf("\n");
}
