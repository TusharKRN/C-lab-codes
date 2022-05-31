//largest no. between two numbers
#include<stdio.h>
int main()
{
    int a, b; 
    printf("enter 1st no. a ");
    scanf("%d",&a);

    printf("enter 2nd no. b ");
    scanf("%d",&b);

    if(a>b){
        printf("a is greatest");

    }
    else
        printf("b is greatest");
    return 0;
}
