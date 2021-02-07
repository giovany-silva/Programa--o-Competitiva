#include<stdlib.h>
#include<windows.h>
#include<stdlib.h>
int main()
{int i,j;
    char a;
    printf("DIGITE S (shoot) para atirar!!!\n");
                   for(j=10; j>=0; j--)
        {

            printf("%i\n",j);
            Sleep(1000);


        }


        scanf("%c",&a);

        if(a=='s')
        {printf("PARABENS BASE ALCANCADA!!!\n");
        }

        else{printf("VOCE NAO AJUSTOU O CANHAO E NAO ATIROU TENTE NOVAMENTE\n ");
        scanf("%c",&a);
        while(a!='s')
        {
          printf("DIGITE DE NOVO\n");
          scanf("%c",&a);


        }

        printf("VOCE ACERTOU\n");}

}
