//This solution is from code chef - Slightly modified though
//https://www.codechef.com/viewsolution/23572940
//Editorial : https://discuss.codechef.com/t/chnum-editorial/22224

#include <stdio.h>
int main(void)
{
    int i,t;
    int n,p;
    int pos, neg;
    scanf("%d",&t);
    
    while(t--)
    {
        scanf("%d",n);
        for(i = 0; i < n; i++)
        {
            scanf("%d",&p);
            if(p > 0)
                pos++;
            else (p < 0)
                neg++;
        }
        if(neg <= 0)
            neg = pos;
        else if (pos <= 0)
            pos = neg;

        printf("%d %d\n",pos,neg);          
    }
}
