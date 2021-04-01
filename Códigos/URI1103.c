#include<stdio.h>
#include<math.h>
int main () 
{ int hi,hf,mi,mf,dh,dm;
  while(1)
  {
      scanf("%d %d %d %d",&hi,&mi,&hf,&mf);
      if(hi==0&&mi==0&&hf==0&&mf==0)break;

      dh=hf-hi;
      dm=mf-mi;

    if(dh<0)printf("%d\n",(24+dh)*60+dm);
    else if(dh==0){

        if(dm<0)printf("%d\n",24*60+dm);
        else printf("%d\n",dm); 
             }
    else printf("%d\n",dh*60+dm);
  }

    return 0;
}
