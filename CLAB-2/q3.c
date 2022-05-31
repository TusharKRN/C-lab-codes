//print my name if age is greater than 18 else print father name
#include<stdio.h>
int main()
{
    int age;
    printf("enter your age");
    scanf("%d",&age);

    if(age>18){
        printf("my name is Tushar KArna");
    }
   else
    printf("my father's name is navin kr. karna");
    return 0;
}
