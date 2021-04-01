#include<bits/stdc++.h>

using namespace std;

int
main ()
{
  int n, i, j, c;
  stack < string>pilha;

  char word[5], d[] = "FACE";
  string b;
  while (cin >> n)
    {
              c = 0;
    
              for (i = 0; i < n; i++)
        	{
        
                	  for (j = 0; j < 4; j++)cin >> word[j];
             
                	  word[4] = '\0';
                
                	  if (pilha.empty ())pilha.push (d);
             
                	 b=pilha.top ();
                	  if (word[0] == b[3] && word[1] == b[2] && word[2] == b[1]&& word[3] == b[0])
                	    {
                    	      pilha.pop ();
                    	      c++;

                	    }
                
                	  else
                	    pilha.push (word);
        
        	}

      cout << c << endl;
              while (!pilha.empty ())pilha.pop ();

    }
  return 0;
}
