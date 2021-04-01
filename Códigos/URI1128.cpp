#include<bits/stdc++.h>
using namespace std;
int n;

void liga( vector<int>mat[],int i,int j)
{
 mat[i].push_back(j);
 
}
void DFSUtil(vector<int>mat[],int v, bool visited[]) 
{ 

    visited[v] = true; 

 
    for (int i:mat[v])
	{
        if (!visited[i]) 
            DFSUtil(mat,i, visited); 

	} 
} 
void DFS(vector<int>mat[],int v,bool visited[]) 
{ 
     DFSUtil(mat,v, visited); 
} 

int main()
{

   int n,m,v,w,p;

    while(cin>>n>>m)
   {
     if(n==0 && m==0)break;
       vector<int>mat[n]; 
    
      while(m--)
      {
         cin>>v>>w>>p;
         liga(mat,v-1,w-1);
       if(p==2)
	{
         liga(mat,w-1,v-1);	
	}


      }

 

      bool yes=true;
     for(int i=0;i<n;i++)
	{

       bool *visited = new bool[n]; 
   	 for (int i = 0; i < n; i++) 
   	     visited[i] = false;
         DFS(mat,i,visited);
      
        for(int j=0;j<n;j++)
	 if(!visited[j])
	    {
		yes=false; 
		break;
	    }
            

	}

  if(yes)cout<<"1";
  else cout<<"0";
  cout<<endl;
   }


return 0;
}