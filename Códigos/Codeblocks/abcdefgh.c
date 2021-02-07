
#include<stdlib.h>
#include<stdio.h>

int main()
{
    int v[10], v1[10], i, j, m;

    //Menu
    printf("############################################################\n");
    printf("###################### MENU DE OPCOES ######################\n");
    printf("############################################################\n");
    printf("##                                                        ##\n");
    printf("## 1. JOGAR                                               ##\n");
    printf("## 2. SAIR                                                ##\n");
    printf("##                                                        ##\n");
    printf("############################################################\n");
    printf("############################################################\n");
    printf("############################################################\n");
    printf("\n");
    printf("Opcao:");
    scanf("%d",&m);

    switch(m)
    {
    case 1:
        for(i=0; i<10; i++)
        {preencher();
            do
            {
                printf("\n\nDigite  o caminho do cavalo em forrmato de L :\n");
                scanf("%d %d",&v[i],&v1[i]);
            }
            while((v[i]<0||v1[i]<0)||(v[i]>4||v1[i]>4));

            switch(i)
            {
            case 0:
            {
                do
                {
                    scanf("%d %d",&v[i],&v1[i]);
                }
                while((v[i]!=3 &&v1[i]!=2)&&(v[i]!=2&&v1[i]!=1));
            }
            case 1:

                {
                    do
                {
                    scanf("%d %d",&v[i],&v1[i]);
                }
                while((v[i]!=3 &&v1[i]!=2)&&(v[i]!=2&&v1[i]!=1));




                }
            case 2:
            case 3:
            case 4:
            {}
            }
            preencher(v[i],v1[i]);
        }
        break;
    case 2:
        break;
    default:
        break;
        return 0;
    }
    return 0;
}

void preencher(int a,int b)
{system("cls");//essa funcao vai limpar a tela
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



