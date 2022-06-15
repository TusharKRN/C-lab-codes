//find the product of two no. using function with passing argument
#include<stdio.h>

int prod(int,int);
int prod(int x ,int y)
{

    return x*y;
}

int main()
{
    int a,b,mul;
    printf("enter two numbers:\n");
    scanf("%d %d",&a,&b);
    mul=prod(a,b);
    printf("%d",mul);

    return 0;

}