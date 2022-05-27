//multiplication table of a no. entered by user 
#include<stdio.h>
int main()
{
    int n, i;
    printf("enter the no. to print table of");
    scanf("%d",&n);
   

    for(i=1; i<=10; i++)
    printf("%d * %d = %d\n", n, i, n*i);


    
    return 0;
}
