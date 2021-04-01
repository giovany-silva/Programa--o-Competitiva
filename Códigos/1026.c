#include<stdio.h>
void decToBase (long long int num_dec, char *c);
int main () 
{long long int a, b;
  char sa[33], sb[33];
  while(1){if(scanf ("%lld %lld", &a, &b)==EOF)return 0;
  decToBase (a, sa);

  decToBase (b, sb);
int i=0;
long long int s=0;
while(i<strlen(sa)||i<strlen(sb))
{
   if(i<strlen(sa)&&i<strlen(sb))s+=(sa[i]-'0'+sb[i]-'0')%2*pow(2,i); 
   else if(i>=strlen(sa))s+=(sb[i]-'0')*pow(2,i);
   else if(i>=strlen(sb))s+=(sa[i]-'0')*pow(2,i);
   i++;
}
printf("%lld\n",s);
}
return 0;

}
void decToBase (long long int num_dec, char *c)
{
  
char resto[] = { '0', '1' };
  
int indx = 0;
  
  if(num_dec==0){c[0]='0';c[1]='\0'; return;}
while (num_dec > 0)
    {
      
c[indx] = resto[num_dec % 2];
      
num_dec /= 2;
      
indx++;
    
    }
c[indx]='\0';    
}
