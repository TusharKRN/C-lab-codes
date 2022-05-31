//multiplication of two no. if sum of two no. is greater than 50
#include<stdio.h>
int main()
{
    int a, b,mul; 
    printf("enter 1st no. a ");
    scanf("%d",&a);

    printf("enter 2nd no. b ");
    scanf("%d",&b);

    mul = a*b;  

    if((a+b)>50){
        printf("sum of the no. %d\n",mul);

    }
        printf("hello world");
    
    
    return 0;
}