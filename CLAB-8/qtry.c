//program to write nth term of fibonacci series
#include<stdio.h>

int fibo();

int main()
{
    int n,i;
    printf("enter the no. of terms:");
    scanf("%d",&n);
    printf("the fibonacci series is:\n");
    for(i=0;i<n;i++)
    {
        printf("%d  ",fibo(i));
    }

    return 0;

}




int fibo(int i)
{
    if(i==0)
    {
        return 0;

    }
    else if(i==1)
    {
        return 1;
    }
    else
    {
        return (fibo(i-1)+fibo(i-2));
    }
}