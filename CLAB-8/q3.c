//swap by call by reference
#include<stdio.h>

void swap(int *x ,int *y)
{
    int c=0;
    c= *x;
    *x=*y;
    *y=c;

}
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    swap(&a,&b);
    printf("no. after swapping is %d and %d",a,b);
    return 0;
}