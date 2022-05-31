//minimum no. between two numbers
#include<stdio.h>
int main()
{
    int a, b; 
    printf("enter 1st no. a ");
    scanf("%d",&a);

    printf("enter 2nd no. b ");
    scanf("%d",&b);

    if(a<b){
        printf("a is smallest");

    }
    else
        printf("b is smallest");
    return 0;
}
