#include<bits/stdc++.h>
using namespace std;
int m,c;
#define TAM 10000
int prices[TAM][TAM];
int can_reach[TAM][TAM];
int shop(int money,int clothes)
{
	for(int i=1;i<=prices[0][0];i++)can_reach[money-prices[0][i]][0]=true;


	for(int j=1;j<clothes;j++)
		for(int i=0;i<money;i++)
		if(can_reach[i][j-1]==true)
		for(int l=1;l<=prices[j][0];l++)
		if(i-prices[j][l]>=0)
         can_reach[i-prices[j][l]][j]=true;

   for(int i=0;i<money;i++)
   if(can_reach[i][clothes-1]==true)
   return(m-i);      


return -1;
}

int main()
{
	int n,max_money;
	scanf("%d",&n);

	while(n--)
	{
		
     scanf("%d %d",&m,&c);


     for(int i=0;i<c;i++)
     {
     	scanf("%d",&prices[i][0]);
     	for(int j=1;j<prices[i][0];j++)
     	scanf("%d",&prices[i][j]);


     }
     memset(can_reach,false,sizeof can_reach);
     max_money=shop(m,c);
     if(max_money>0)
     printf("%d\n",max_money);
     else 
     printf("no solution\n");

	}


return 0;
}

