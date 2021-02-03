#include<bits/stdc++.h>

using namespace std;
std::vector<int> parents(800);

int t;

void makeSet(){
parents.clear();
for(int i=0;i<800;i++){parents.push_back(i);}

}
int find(int elem)
{
    if(elem==parents[elem])return elem;
   return parents[elem]=find(parents[elem]);
}

void unite(int x,int y)
{
parents[find(y)]=find(x);

}
bool isSameSet(int x,int y)
{
    return find(x)==find(y);
}
int main()
{
 char a;
 int b,c,n,q,q1,i,j;
 string txt;

 cin>>n;

for(i=0;i<n;i++)
{q=q1=0;
	cin>>t;

makeSet();
getline(cin,txt);
	while(getline(cin,txt)&&txt!="")
   {


	         sscanf((char*)txt.c_str(),"%c %d %d",&a,&b,&c);

		if(a=='c')unite(b,c);
		else
		{
			if(isSameSet(b,c))
			{
				q++;


			}
			else q1++;
		}

	}

cout<<q<<","<<q1<<endl;
if(i!=n-1)cout<<endl;
}





    
return 0;
}