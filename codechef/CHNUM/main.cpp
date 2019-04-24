#include <stdio.h>

int CHNUM(int arr[], int n)
{
    int max, min, i;
    i = 0;
    while(i < n)
    {
        //Both are positive case
        if(arr[i] * arr[i+1] > 0)
        {
            max += 2;
        }
        else 
        {
            min +=2;
        }
        i += 2;
    }
    printf("Value of max and min is %d and %d\n",max, min);
    return 0;
}
int main(int argc, char **argv)
{
	int n = 5;
    int arr[] = {4,5,6,7,8};
    CHNUM(arr,n);
	return 0;
}
