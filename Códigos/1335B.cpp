int
main ()
{
  int t, i, j, n, a, b;
  char c,d;
 
  cin >> t;
  for (i = 0; i < t; i++)
    {
      cin >> n >> a >> b;
 
      c = 'a';
      
      
     // if(a==1)d='b';
       d=c+b-1;
     
    
      for (j = 0; j < n;j++)
	{
	  if (c <= d)
	    {
	      cout << c;
	      c++;
 
	    }
	  else 
	    {
 
	      c = 'a';
	      cout << c;
	      c++;
	    }
 
 
 
 
	}
	  cout << endl;
 
 
 
    }
 
  return 0;
}