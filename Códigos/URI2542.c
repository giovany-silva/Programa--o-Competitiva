#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int y;
    while(cin>>y)
    {
        int x,z;
        cin>>x>>z;
        vector<int>M[x];
        vector<int>L[z];
        for(int i=0;i<x;i++)
        {
            for(int j=0;j<y;j++)
            {
                int a;
                cin>>a;
                M[i].push_back(a);
            }
        }
        for(int i=0;i<z;i++)
        {
            for(int j=0;j<y;j++)
            {
                int a;
                cin>>a;
                L[i].push_back(a);
            }
        }
        int MM,LL,A;
        cin>>MM>>LL;
        
        cin>>A;
        long long s=M[MM-1][A-1],S=L[LL-1][A-1];
        if(s>S) cout<<"Marcos\n";
        else if(s<S) cout<<"Leonardo\n";
        else cout<<"Empate\n";
    }
    return 0;
}