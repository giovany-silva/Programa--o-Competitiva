#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{char s[21];
int i,t;
    while(1)
    {
                scanf("%s",s);
                if(s[0]=='-')break;
                t=strlen(s);
                i=t-1;
                if(s[i]>'0')s[i]--;     
                else 
                    while(i-1>=0)
                    {
                        if(s[i]=='0')
                        {s[i]='9';
                        if(s[i-1]>'0'){s[i-1]--;
                        break;}
                        }
                        i--;
                    }
        if(s[0]=='0'&&t>1)for(i=1;i<t;i++)printf("%c",s[i]);
      else printf("%s",s);
      printf("\n");
        
    }
    return 0;
}
