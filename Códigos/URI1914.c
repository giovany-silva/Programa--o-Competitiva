#include <stdio.h>
#include <string.h>
int main()
{
    int aa,bb;
    long long int cc,dd,ee,ff;
    char aaaa[201], bbbb[10], cccc[201], dddd[10], eeee[]="PAR", ffff[]="IMPAR";
    scanf("%d", &aa);
   bb=1; 
   while(bb<=aa)
    {
        scanf("%s %s %s %s", aaaa,bbbb,cccc,dddd);
        scanf("%lld%lld", &cc, &dd);
        ee=cc+dd;
        if(bbbb[0]=='P')
        {
            if(ee%2==0) printf("%s\n", aaaa);
            else printf("%s\n", cccc);
        }
        else
        {
            if(ee%2==0) printf("%s\n", cccc);
            else printf("%s\n", aaaa);
        }
       bb++;
    }
    return 0;
}
