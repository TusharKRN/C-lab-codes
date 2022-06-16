//nth term of fibonacci
//program to write nth term of fibonacci series
#include<stdio.h>

int fibo(int);
int fibo(int n)
{
    if(n==0)
    {
        return 0;

    }
    else if(n==1)
    {
        return 1;
    }
    else
    {
        return (fibo(n-1)+fibo(n-2));
    }
}

int main()
{
    int n,f;
    printf("enter the nth terms:");
    scanf("%d",&n);
    f=fibo(n);
    printf("the nth term is %d",f);
    return 0;

}




