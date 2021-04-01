#include<bits/stdc++.h>
using namespace std ;
bool kmp(string texto, string padrao, vector<int> aux);
void prefix(string padrao, vector<int> & aux);
int main()
{int n,m;
string txt,trech;
    map<string,char>notas;
    map<int,char>valor;
    notas["C"]='A';
    notas["B#"]='A';
    notas["Db"]='B';
    notas["C#"]='B';
    notas["D"]='C';
    notas["D#"]='D';
    notas["Eb"]='D';
    notas["E"]='E';
    notas["Fb"]='E';
    notas["F"]='F';
    notas["E#"]='F';
    notas["Gb"]='G';
    notas["F#"]='G';
    notas["G"]='H';
    notas["Ab"]='I';
    notas["G#"]='I';
    notas["A"]='J';
    notas["A#"]='K';
    notas["Bb"]='K';
    notas["B"]='L';
    notas["Cb"]='L';

    valor[0]='a';
    valor[1]='b';
    valor[2]='c';
    valor[3]='d';
    valor[4]='e';
    valor[5]='f';
    valor[6]='g';

   
 
   


    while(cin>>n>>m&&n!=0&&m!=0)
    {
       string  mus="",musica="";
     
         
	  int i=0;	
           while(i<n)
           {	
		string s;
		cin>>s;

                 

			musica+=notas[s];
                      i++;

             	    

	   }

                         // cout<<musica<<endl;

            string trecho="";

            i=0;
            while(i<m)
            {
                cin>>trech;

			trecho+=notas[trech];
		        i++;


            }

    //cout<<"musica"<<musica<<endl<<endl;
    //cout<<"trecho"<<trecho<<endl<<endl;
         
           string dif_mus,dif_tre;
           if(n==1)dif_mus=musica;
          else for(int k=0;k<n-1;k++)
              {
                  int y=musica[k+1]-'0',z=musica[k]-'0';
                  int x=(y-z);
                    if(abs(x)>6)
			{
			 x=12-max(y,z)+min(y,z);
                         
			}x=abs(x);
                   dif_mus+=valor[x];
	      }
     
           //cout<<"mus"<<dif_mus<<endl;
           if(m==1)dif_tre=trecho;
          else for(int k=0;k<m-1;k++)
              {
                  int y=trecho[k+1]-'0',z=trecho[k]-'0';
                  int x=(y-z);
                    if(abs(x)>6)
			{
			 x=12-max(y,z)+min(y,z);
                         
			}
		   x=abs(x);
                   dif_tre+=valor[x];
	      }
           //cout<<"tre"<<dif_tre<<endl;
           if(m!=1)m--;
           vector<int>aux(m);
           prefix(dif_tre,aux);

            bool yes=false;
   	   if(kmp(dif_mus,dif_tre,aux))yes=true;            
            

            
            if(yes)
            {
                  cout<<"S"<<endl;
            }
        else 
           {
             cout<<"N"<<endl; 
           }
      
        
    }
 
    return 0;
}
bool kmp(string texto, string padrao, vector<int> aux)
{
	int idx_texto = 0, idx_padrao = 0;

	while((unsigned)idx_texto < texto.size())
	{
		if(padrao[idx_padrao] == texto[idx_texto])
		{
			idx_padrao++;
			idx_texto++;
		}

		if((unsigned)idx_padrao == padrao.size())
		{
			return true;
			idx_padrao = aux[idx_padrao - 1];
		}

		if((unsigned)idx_texto < texto.size() &&
				padrao[idx_padrao] != texto[idx_texto])
		{
			if(idx_padrao)
				idx_padrao = aux[idx_padrao - 1];
			else
				idx_texto++;
		}
	}
return false;
}

void prefix(string padrao, vector<int> & aux)
{
	aux[0] = 0;
	int j = 0, i = 1;

	while((unsigned)i < padrao.size())
	{
		if(padrao[i] == padrao[j])
		{
			j++;
			aux[i] = j;
			i++;
		}
		else
		{
			if(j)
				j = aux[j - 1];
			else
			{
				aux[i] = 0;
				i++;
			}
		}
	}
}
