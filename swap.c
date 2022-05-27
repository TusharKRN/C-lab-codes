#include <stdio.h>
int main(){
    int a,b,c;
    printf("enter first number",a);
    scanf("%d",&a);
    printf("enter second number",b);
    scanf("%d",&b);
    c=a;
    a=b;
    b=c;
    printf("%d,%d",a,b);

    return 0;
}    