//divisible by 3 or 5 or not
#include<stdio.h>
int main()
{
     int a; 
    printf("enter 1st no. a ");
    scanf("%d",&a);


    if(a%3==0 || a%5==0){
        printf("the no is divisible by either 3 or 5 " );
    }
    else
        printf("the no. is not divisible by either 3 or 5 ");
    return 0;
}
