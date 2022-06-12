//to use all predefined function in a program
#include<stdio.h>
#include<string.h>
int main()
{   
    int l1,l2;
    char str1[100],str2[100],str[100];

    gets(str1);
    gets(str2);
    

    l1=strlen(str1);
    printf("the length of the string is %d\n",l1);
    l2=strlen(str2);
    printf("the length of the string is %d\n",l2);

    if(strcmp(str1,str2)==0)
    {
        printf("the strings are equal\n");
    }
    else
    {
        printf("the strings are not equal\n");
    }
    strcpy(str,str1);
        printf("the copied string  is %s\n",str);

         
        printf("the concatenated string is %s\n",strcat(str,(str1,str2)));

         

        printf("the reversed string is %s\n",strrev(str1));


    return 0;
}
