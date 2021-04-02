#include <stdio.h>
#include <string.h>
int main()
{
    int c1=1,s=0;
    
    while(1)
    {
        int m,d;
        if(scanf("%d%d",&m,&d)==EOF)break;
        if(m==12&&d>25)printf("Ja passou!\n");
        else if(m==12&&d==25)printf("E natal!\n");
        else if(m==12&&d==24)printf("E vespera de natal!\n");
       else
       {
        
            switch(m)
            {
             case 1:
              { s=360-d;
        
                  break;
        
              }
             case 2:
             {
                 s=329-d;
                 break;
             }
             case 3:
             {s=300-d;
                 break;
                 
             }
             case 4:
             {s=269-d;
                 break;
                 
             }
             case 5:
             {s=239-d;
                 break;
                 
             }
             case 6:
             {s=208-d;
                 break;
                 
             }
             case 7:
             {s=178-d;
                 break;
                 
             }
             case 8:
             {s=147-d;
                 break;
                 
             }
             case 9:
             {s=116-d;
                 break;
                 
             }
             case 10:
             {s=86-d;
                 break;
                 
             }
             case 11:
             {s=55-d;
                 break;
                 
             }
             case 12:
             {s=25-d;
                 break;
                 
             }
             
                break;
            }
           
           printf("Faltam %d dias para o natal!\n",s);
       }
        
    }

    return 0;
}
