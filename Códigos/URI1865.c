#include <stdio.h>
int main()
{   char s[6];
 int i,d,e;
scanf("%d",&e);
	for(i=0;i<e;i++)
	{
	scanf("%s %d",s,&d);
	if(s[0]=='T'&&s[1]=='h')printf("Y\n");
	else printf("N\n");
	}
  
  return 0;
}