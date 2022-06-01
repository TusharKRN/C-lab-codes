//whether the no. is prime or not
#include<stdio.h>
int main()
{
    int n,i,isPrime=1;
    printf("enter a no.:");
    scanf("%d",&n);

    for ( i = 2; i*i < n; i++)
    {
        if (n%i==0)
        {
            isPrime=0;
        }
    }
        if (isPrime)
        {
            printf("the no. %d is prime \n ",n);
        }
        else
        {
             printf("the no. %d is not prime\n",n);
        }
        
        
        
    
    

    return 0;
}
