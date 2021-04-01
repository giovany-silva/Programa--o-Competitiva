#include<stdio.h>
#include<math.h>
int main (){
 int hi,hf,mi,mf,dh,dm;
  
      scanf("%d %d %d %d",&hi,&mi,&hf,&mf);
      dh=hf-hi;
      dm=mf-mi;
    if(dh<0){
        if(dm<0)printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",23+dh,60+dm);
        else printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",24+dh,dm); 
    }
    else if(dh==0){
        if(dm<0)printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",23,60+dm);
        else if(dm==0)printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",24,0);
        else printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",0,dm); 
             }
    else {
        if(dm<0)printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",dh-1,60+dm);
        else printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",dh,dm); 
    }
    

    return 0;
}
