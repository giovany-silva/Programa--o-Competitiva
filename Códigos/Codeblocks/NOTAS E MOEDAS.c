#include<stdlib.h>
#include<math.h>
int main()
{
    double N;
    int a,b,c,d,e,f,g,h,i,j,k,l;

   scanf("%lf",&N);

   int r=(int)N;

      a=r/100;   
      b=(r%100)/50;    
      c=((r%100)%50)/20;
      d=(((r%100)%50)%20)/10;
      e=((((r%100)%50)%20)%10)/5;
      f=(((((r%100)%50)%20)%10)%5)/2;
      g=((((((r%100)%50)%20)%10)%5)%2)/1;

 r=double(N-r)*100;


     h=(r%100)/50; 
      i=((r%100)%50)/25;
      j=(((r%100)%50)%25)/10; 
      k=((((r%100)%50)%25)%10)/5; 
      l=(((((r%100)%50)%25)%10)%5);
       printf("NOTAS\n%d nota(s) de R$ 100,00\n%d nota(s) de R$ 50,00\n%d nota(s) de R$ 20,00\n%d nota(s) de R$ 10,00\n%d nota(s) de R$ 5,00\n%d nota(s) de R$ 2,00 \nMOEDAS:\n%d moeda(s) de R$ 1,00\n%d moeda(s) de R$ 0,50\n%d moeda(s) de R$ 0,25\n%d moeda(s) de R$ 0,10\n%d moeda(s) de R$ 0,05\n%d moeda(s) de R$ 0,01\n",a,b,c,d,e,f,g,h,i,j,k,l);



    }

