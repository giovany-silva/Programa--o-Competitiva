#include <stdio.h>
#include <string.h>
int main()
{int z;
long long int fato;
char sa[16];
  
while(1)
{scanf(" %s",sa);
if(strcmp(sa,"0")==0)break;
z=strlen(sa);


 
for(fato = 1; z > 1; z -=1)
fato= fato * z;
 
printf("%lld\n", fato);
 
}
    

    return 0;
}


