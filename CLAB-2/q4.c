//sum of no. if greater than 70 else difference
#include<stdio.h>
int main()
{
    int a, b,sum,diff; 
    printf("enter 1st no. a ");
    scanf("%d",&a);

    printf("enter 2nd no. b ");
    scanf("%d",&b);

    sum = a+b; 
    diff = a-b; 

    if((a+b)>70){
        printf("sum of the no. %d\n",sum);

    }
    else
        printf("difference of a no %d\n",diff);
    
    return 0;
}
