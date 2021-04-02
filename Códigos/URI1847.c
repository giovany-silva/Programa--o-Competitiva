#include <stdio.h>
int main()
{
 int n,b,e,dif1,dif2;
scanf("%d %d %d",&n,&b,&e);
 dif1=b-n;
   dif2=e-b;
 if(dif1<0&&dif2>=0)
	printf(":)\n");
 else if(dif1>0&&dif2<=0)
	printf(":(\n");
 else if(dif1>0&&dif2<dif1)
	printf(":(\n");
 else if(dif1>0&&dif2>=dif1)
	printf(":)\n");
 else if(dif1<0&&dif2>dif1)
	printf(":)\n");
 else if(dif1<0&&dif2<=dif1)
	printf(":(\n");
 else if(dif1==0&&dif2>0)
	printf(":)\n");
 else if(dif1==0&&dif2<=0)
	printf(":(\n");
    return 0;
}
