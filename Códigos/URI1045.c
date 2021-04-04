#include<stdlib.h>
#include<stdio.h>

int main()
{
    float A,B,C,ma;


   do{
        scanf("%f %f %f",&A,&B,&C);
   }
    while((A<=0&&B<=0)&&C<=0);


    if(B>=A&&A>=C){
       	 	ma=A;
        	A=B;
        	B=ma;
    }
    else if(B>=C&&C>=A){
        	ma=B;
        	B=C;
        	C=A;
        	A=ma;
    }
    else if((C>=A)&&(A>=B)){
            	ma=C;
            	C=B;
            	B=A;
            	A=ma;
    }
    else if((C>=B)&&(B>=A)){
            	ma=C;
            	C=A;
            	A=ma;
    }


    else if(C>B){
        	ma=C;
        	C=B;
        	B=ma;
    }

    if(A>=B+C){
        	printf("NAO FORMA TRIANGULO\n");
    }
    else if(pow(A,2)==pow(C,2)+pow(B,2)){
        	printf("TRIANGULO RETANGULO\n");
    }
    else if(pow(A,2)>(pow(B,2)+pow(C,2))){
        	printf("TRIANGULO OBTUSANGULO\n");
    }
    else if(pow(A,2)<B,2+C,2){
        	printf("TRIANGULO ACUTANGULO\n");
    }

   if(A==B&&B==C){
        printf("TRIANGULO EQUILATERO\n");
   }
   else if((((A==B)||B==C))||(A==C)){
        printf("TRIANGULO ISOSCELES\n");

   }


}



