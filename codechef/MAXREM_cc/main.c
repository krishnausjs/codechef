#include <iostream>
using namespace std;

#define gc getchar  // _unlocked
#define pc(x) putchar(x);
 
inline void write(long long n)
{
    long long N = n, rev, count = 0;
    rev = N;
    if (N == 0) { pc('0'); pc('\n'); return ;}
    while ((rev % 10) == 0) { count++; rev /= 10;}
    rev = 0;
    while (N != 0) { rev = (rev<<3) + (rev<<1) + N % 10; N /= 10;}
    while (rev != 0) { pc(rev % 10 + '0'); rev /= 10;}
    while (count--) pc('0');
}

inline long long read() 
{
	long long ret=0,cc=gc();
	long long f=0;
	for(;(cc<'0'||cc>'9')&&cc!='-';)
		cc=gc();
	if(cc=='-'){f=1;cc=gc();}
	for(;cc>='0'&&cc<='9';)
	{
		ret=ret*10+cc-'0';
		cc=gc();
	}
	return f?-ret:ret;
}

int main()
{
	long long t,n,i,j,max,mod;
	long long *aVal;
    t = read();
    max = 0;
	while(t--) {
		n = read();
        aVal =(long long*)malloc(sizeof(long long)*n);

        //Read the puzzles
        for(i=0;i<n;i++) 
        {
            for(j = 0; j < n; j++)
            {
                if(i != j)
                {
                    mod = aVal[i] % aVal[j];
                    if (mod > max)
                        max = mod;
                }
            }
		}       
    } 
    cout << "max" <<endl;

	return 0;
}