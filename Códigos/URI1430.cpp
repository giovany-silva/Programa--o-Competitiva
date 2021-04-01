#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

        map<char, double> mapa;
        mapa.insert(make_pair('W',1)); 
        mapa.insert(make_pair('H',0.5));
        mapa.insert(make_pair('Q',0.25)); 
        mapa.insert(make_pair('E',0.125));
        mapa.insert(make_pair('S',0.0625));
        mapa.insert(make_pair('T',0.03125));         
        mapa.insert(make_pair('X',0.015625));                            


    int i = 0,qtd;
    double sum;
    char c;
   
    while (1)
    {
            map<char, double> ::iterator it;
 
        c=getchar();
        if(c=='*')break;
        sum=qtd=0;
        while(1)
            {
	            c=getchar();
	            if(c=='\n')break;
	            
	           else if(c!='/')
	            {
		            it=mapa.find(c);
	            sum+=it->second;
	             } 
	            else{
	                   if(sum==1.0)qtd++;
	                   sum=0;
	               } 
	              
            }

    cout<<qtd<<endl;     
      
    }

    return 0;
}
