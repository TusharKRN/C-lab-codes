//swap by call by value
#include<stdio.h>

void swap(int,int);
void swap(int x,int y)
{
    int c=0;
    c=x;
    x=y;
    y=c;
    printf("no. after swapping is %d and %d",x,y);

}
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    swap(a,b);
    return 0;
}
