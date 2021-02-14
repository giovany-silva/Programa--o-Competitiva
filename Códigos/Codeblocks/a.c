#include <stdio.h>
#include<windows.h>


int main()
{
    int i;
    char atirar,c;
    atirar='a';
    {
        for(i=10; i>=0; i--)
        {

            printf("%i\n",i);
            Sleep(1000);

        }
        scanf("%c",c);
        if(c!=atirar);
        {
            for(i=10; i>=0; i--)
            {

                printf("%i\n",i);
                Sleep(1000);

            }
        }

        return 0;


    }
}
