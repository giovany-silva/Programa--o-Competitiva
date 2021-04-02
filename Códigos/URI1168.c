#include <stdio.h>
#include <string.h>
int main()
{ int n,i,s;
 char a[102];
scanf("%d",&n);
for(i=0;i<n;i++){
	s=0;
   	int j=0;
	scanf(" %s",a); 

  	while(j<strlen(a)){
         
        	 switch(a[j]){
	             case '1':{
			s+=2;
                	break;
        	     }
            	     case '2':{
			s+=5;
                        break;
                     }
                     case '3':{
			s+=5;
                        break;
                     }
             	     case '4':{
			s+=4;
                        break;
                     }
             	     case '5':{
			s+=5;
                        break;
                     }
          	     case '6':{
			s+=6;
                        break;
                     }
    	             case '7':{
			s+=3;
                        break;
                     }
 	             case '8':{
			s+=7;
                        break;
                     }
 	             case '9':{
			s+=6;
                        break;
                     }
 	             case '0':{
			s+=6;
                        break;
                     }
                    break;       
            }
        j++;
	}
  printf("%d leds\n",s);
  }

}
