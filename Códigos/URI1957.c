#include <stdio.h>
void string_v (long long int a);
int
main ()
{
  long long int w;
  scanf ("%lld", &w);
   string_v (w);    
return 0;
}

void string_v(long long int a)
{
  char v[15];
  long long int p[10], i = 0,j, k = 0;
                    while (a >0)
            	{
            	  
            	  
            	  
                    	  switch (a%16)
                    	    {
                            	    case 15:
                            	      {
                            		v[i] = 'F';
                            		break;
                            	      }
                            	    case 14:
                            	      {
                            		v[i] = 'E';
                            		break;
                            
                            	      }
                            	    case 13:
                            	      {
                            		v[i] = 'D';
                            		break;
                            	      }
                            
                            	    case 12:
                            	      {
                            		v[i] = 'C';
                            		break;
                            	      }
                            	    case 11:
                            	      {
                            		v[i] = 'B';
                            		break;
                            	      }
                            	    case 10:
                            	      {
                            		v[i] = 'A';
                            		break;
                            	      }
                            
                            	    default:
                            	      {
     
                                		  {
                                		    v[i] =48+a%16;
                                		  }  
                             
                            	      }
                              break;
                    	        
                    	    }
                  a = a / 16;  
            	  i++;
            	  
            	}
            	      v[i] = '\0';
          
         for (j = i-1; j >= 0; j--) printf ("%c", v[j]);
                    	          
                    	  printf ("\n");
}