//print grade
#include<stdio.h>
int main()
{
    int m;
    printf("enter your marks");
    scanf("%d",&m);

    if(m>40){
        printf("%d  you have passed\n",m);
        
            if(m>90)
            {
                printf("%d you have scored O grade",m);
            }
            
                else if(m>80 && m<=90)
            {
                printf("%d you have scored E grade",m);
            }
            
                else if(m>70 && m<=80)
            {
                printf("%d you have scored A grade",m);
            }
            
               else if(m>60 && m<=70)
                {
                    printf("%d you have scored B grade",m);
                }
            
               else if(m>50 && m<=60)
                {
                    printf("%d you have scored C grade",m);
                }
                
                  else  if(m>40 && m<=50)
                    {
                        printf("%d you have scored D grade",m);
                    }
    
                else{
                    printf("%d you have failed",m);
                }
    
    }

    return 0;
}
