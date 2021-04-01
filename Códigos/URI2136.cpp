#include <bits/stdc++.h>

using namespace std;

int main()
{
    
        multimap<int,string,greater<int>> mapa;
        multimap<int,string,greater<int>> ::iterator it;
        set<string>yes,no;
        set<string>::iterator it2;

    string word,word2;
    while (1)
    {
    
        cin>>word;
       
        if(word=="FIM")
        {
          for(it2=yes.begin();it2!=yes.end();it2++)
          {
          	
             cout<<*it2<<endl;

          } 
           for(it2=no.begin();it2!=no.end();it2++)
          {
          	
             cout<<*it2<<endl;

          } 
          it=mapa.begin();
          cout<<endl<<"Amigo do Habay:\n"<<it->second<<endl;
        break;

        }
        else
        {
	        cin>>word2;
	        if(word2=="YES")
	        {
	            yes.insert(word);
	           mapa.insert(make_pair(word.size(),word));
            }
	        else no.insert(word);



         

        }
    }

    return 0;
}
