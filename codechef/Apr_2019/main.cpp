#include <iostream>
using namespace std;

int is_space(long long c)
{
    if(c == ' ' || c == '\n' || c == '\t')
        return 1;
    else
        return 0;
}

int is_valid_char(long long c)
{
    if(c < '0' || c > '9')
        return 1;
    else
        return 0;
}

int read() 
{
	long long ret = 0, c = 0;
	int sign = 0;

    //Read first character    
    c = getchar();
	
    //Store the sign
     sign =  (c=='-') ? 1 : 0;   
	
    //Make sure its a valid character
    if(c == '-' || c == '+' ||  is_space(c) || is_valid_char(c))
    {
        c = getchar();
    }
    
    //If its a valid character,  return its integer value
    for(;c>='0'&& c<='9';)
	{
		ret=ret*10+(c-'0');
        c=getchar();
	}
    
    //Add the sign if any
	return sign?-ret:ret;
}

int main()
{
	long long t =0 , n =0;
    long long i = 0, j = 0 ;
    long long max = 0, mod = 0;
	long long  *aVal;
    
    //Read test cases count
    t = read();
        
    //Loop all test cases
	while(t--) 
    {
        //Read number of puzzles
		n = read();
         
        //Dynamically allocate memory
        aVal = new long long[n];
        
        //Read all puzzles
        for(i =0 ; i< n; i++)
        {
            aVal[i] = read();
        }
        
        //For each puzzle
        for(i=0; i<n; i++) 
        {
            //For each other puzzle including the self
            for(j = 0; j < n; j++)
            {
                //Discard self puzzle comparision
                if(i != j)
                {
                    mod = aVal[i] % aVal[j];
                    if (mod > max)
                        max = mod;
                }
            }
		}       
    } 
    cout << max <<endl;
    delete [] aVal;
	return 0;
}