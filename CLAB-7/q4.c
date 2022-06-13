//calculator using switch case
#include<stdio.h>
int main()
{
    
    int i,sum,diff,mul,r;
    float a,b,div;
    

    
    do{
    printf("enter the task you want to operate\n1.Add\n2.Difference\n3.Product\n4.Division\n");
    scanf("%d",&i);
    printf("enter two numbers:\n");
    scanf("%f %f",&a,&b);
    
     
    
    
    switch (i)
    {
    case 1:
        sum=a+b;
        printf("the sum is %d",sum);
        break;
    
    case 2:
        diff=a-b;
        printf("the difference is %d",diff);
        break;

    case 3:
        mul=a*b;
        printf("the product is %d",mul);
        break;

    case 4:
        if(b!=0)
        {
            div=a/b;
            printf("the quotient is %.2f",div);
        }
        else
        {
            printf("cant be divisible");
            
        }
        break;
    
        default:
        printf("404 error not found");
        break;
    }
     printf ("\nDo you want to continue ?\n PRESS 1 IF YES AND 0 IF NO\n");
		scanf("%d",&r);
	} while (r==1 && r!=0);
    return 0;
    }

    
		

