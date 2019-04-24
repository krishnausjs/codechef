/*
 * Chef Leonardo has a decimal integer N and a non-zero decimal digit d. 
 * N does not contain the digit zero; specifically, N should always be treated as a decimal integer without leading zeroes.

 * Chef likes d and does not like any other digit, so he decided to change N. 
 * He may apply the following operation any number of times (including zero): append the digit d to the decimal representation of N (d becomes the least significant digit of N),
 * then remove one occurrence of one digit from the decimal representation of N.

 *Chef has already changed a lot of numbers and he got bored. 
 * Now, he wants to know the smallest possible value of N which can be obtained by performing the operation described above. Can you help him?
*/
#include <stdio.h>
#include <limits.h>

int main(void)
{
    int N,d;
    long long num;
    int c = 0;
    int index = 0;
    int min = INT_MIN;
    
    printf("Enter the values of N and d\n");
    scanf("%d%d",&N,&d);
    
    while(N > 0)
    {
        c = (N%10);
        N = N/10;
        printf("Value of is %d\n",c);
    }
    return 0;
}