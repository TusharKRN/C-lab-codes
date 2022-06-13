#include <stdio.h>
int greater(int, int);
int greater(int x, int y)
{
    if(x>y)
    return x;
    else
    return y;
}  


int main()
{
    int a,b,ans;
    printf("enter two numbers:\n");
    scanf("%d %d",&a,&b);
    ans = greater(a,b);
    printf("greatest among %d and %d is %d",a,b,ans);
    return 0;
}
      