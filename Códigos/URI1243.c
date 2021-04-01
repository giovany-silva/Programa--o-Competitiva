#include <stdio.h>
#include <string.h>
#include <ctype.h>
int palavra_palavra(char *s);
int main()
{
    int qpalavra,bp,i,ia,qletra;
    char s[51],aux[51];
    double me;
    while(1)
    {
                        if(scanf(" %50[^\n]s",s)==EOF)break;
                          qletra=0;qpalavra=0;ia=0;i=0;
                                    while(s[i]!='\0')
                                   {
                                        if(s[i]==' ')
                                         {
                                                aux[ia]='\0';
                                                ia=0;
                                                bp=palavra_palavra(aux);qletra+=bp;
                                             if(bp>0)qpalavra+=1;
                                         }
                                
                                
                                         else{  aux[ia]=s[i];
                                                ia++;
                                             }
                                        i++;        
                                   }
                                     aux[ia]='\0';
                                   bp=palavra_palavra(aux);qletra+=bp;
                                 if(bp>0)qpalavra+=1;
                                  if(qpalavra>0)me=qletra/qpalavra;
                                  else me=0;
                    if(me<=3)printf("250");
                    else if(me==4||me==5)printf("500");
                    else if(me>=6)printf("1000");
                    printf("\n");
    }
  
    return 0;
}
int palavra_palavra(char *s)
{int i,tam=strlen(s),b=1;
int num_aux=0;
 for(i=0 ; i<tam ; i++){ 
                if( isdigit(s[i] ) || s[i] == '.' && i!=tam-1){b=0;break;}
                else if(s[i] != '.'){ 
                    num_aux++; //incrementa o comprimento da palavra
                } 
            } 
if(!b)return 0;            
return num_aux;
}