#include<stdio.h>
#include<string.h>
int main()
{
char a[513],b[513],aux[513];
scanf("%s %s",a,b);
int tb=strlen(b),ta=strlen(a),au,r;
if(tb>ta){strcpy(aux,b);strcpy(b,a); strcpy(a,aux);au=ta;ta=tb;tb=au;}
ta--;
tb--;
while(ta>=0)
	{
	  if(tb>=0) r=(a[ta]-'0'+b[tb]-'0');
	  else r=a[ta]-'0';
	  a[ta]=(r%10)+'0';
	       r/=10;
        if(ta>0)a[ta-1]=(a[ta-1]-'0'+r)+'0';
       
        ta--;tb--;
	}
if(r>0)printf("%d",r);
printf("%s\n",a);
return 0;
}