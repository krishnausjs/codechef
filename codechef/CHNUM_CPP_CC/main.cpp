//This is code chef solution in c++
//https://discuss.codechef.com/t/chnum-editorial/22224
#include <iostream>
using namespace std;

#define MAX(a,b) (a>b)?a:b
#define MIN(a,b) (a<b)?a:b

int t;
int n;

int main(int argc, char **argv)
{
    //Sets whether the standard C++ streams are synchronized to the standard C streams after each input/output operation.
    ios_base::sync_with_stdio(false);
    int test;
    int i;
    cout << "Enter test cases" << endl;
	scanf("%d",&t);
    for(test = 1;  test<=t; test++)
    {
        cout <<"Enter number of participants" << endl;
        scanf("%d",&n);
        
        int pos = 0;
        int neg = 0;
        cout <<"Enter participants" << endl;
        for(i = 0; i<n; i++)
        {
            int a;
            scanf("%d",&a);
            if(a < 0)
                neg++;
            else
                pos++;
        }
        
        if(neg == 0)
            cout << pos << pos << endl;
        else if(pos == 0)
            cout << neg << neg << endl;
        else
        {
            cout << MAX(neg,pos);
            cout << MIN(neg,pos);
        }
    }
	return 0;
}
