#include <stdio.h>
int main ()
{
  int i , d, n,j;
  char s[101], c;
  while (1)
    {i=0;
          scanf ("%d %c", &d,&c); if (d == 0 && c == '0')return 0;
                   while (c != '\n')
    	{
    	  if ((c - '0') != d&&(c - '0') >= 0&&(c - '0') <= 9){s[i] = c;
    	  i++;}
    	scanf ("%c", &c);
    	    
    	}

    	if(i==0){printf("%d\n",0);continue;}
          s[i] = '\0';
          if(s[0]=='0'&&i>1)
          {i=0;
           while(s[i]=='0'&&i<strlen(s)-1)i++;
          
              for(j=i;j<strlen(s);j++)printf("%c",s[j]);
          }
          
         else  printf ("%s",s);
          printf ("\n");
    }
  return 0;
}
