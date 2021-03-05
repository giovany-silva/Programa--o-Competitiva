#include<bits/stdc++.h>

using namespace std;

string DConquer(string str){
	
	int tam = str.size();
	if(tam == 1){
		return str;
	}else if(tam == 2){
		if(str == "01" or str == "10"){
			return "";
		}else{
			return str;
		}
	}else{
		int a;
		if(tam % 2 == 0){
			a = tam/2; 
		}else{
			a = (tam/2)+1;
		}
		string dir = DConquer(str.substr((int)tam/2,a));
		string esq = DConquer(str.substr(0,(int)tam/2));
		string aux;
		int tamEsq = esq.size();
		while(esq != "" and dir != ""){
			aux = "";
			aux+= esq[tamEsq-1];
			aux+= dir[0];
			
			if(aux == "01" or aux == "10"){
				esq.erase(esq.end()-1);
				tamEsq--;
				dir.erase(dir.begin());
			}else{
				break;
			}
		}

		return (esq+dir);
	}
}

int main(){
	
	int n;
	string str;

	cin>>n;
	cin>>str;

	cout<<DConquer(str).size()<<endl;

	return 0;
}
