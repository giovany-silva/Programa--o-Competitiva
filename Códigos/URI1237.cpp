#include <stdio.h>
#include <string.h>
int main ()
{int n,l,c1,i,j,tc,td,k,val;
char c[51],d[51],aux[51];
        while(1)
         {   i=0;val=0;
             scanf(" %[^\n]s",c);
             if(scanf(" %[^\n]s",d)==EOF)break;
             tc=strlen(c);
             td=strlen(d);//lembrar de organizar tam
                 if(tc>td)
                     {
                         strcpy(aux,c);
                         strcpy(c,d);
                         strcpy(d,aux);
                         
                     }
             tc=strlen(c);
             td=strlen(d);//lembrar de organizar tam
           if(strstr(d,c)!=NULL){i=tc;}//se tiver pego o tamanho
          else {
              k=tc-1;char s[tc];
              int ind=1,p,ik;
             while(ind<tc&&val!=1)
             {
                                 p=0;
                             while(p<=ind)
                                    {    ik=0;
                                         for(j=p;j<k+p;j++){s[ik]=c[j];ik++;}
                                         s[ik]='\0';
                                         if(strstr(d,s)!=NULL)
                                         {
                                             val=1;i=k;
                                             break;
                                         }
                                         p++;
                                    } 
                                 ind++;
                                 k--;
                             }
                    
                    
                     
                       }
            printf("%d\n",i);
         }
  return 0;
}