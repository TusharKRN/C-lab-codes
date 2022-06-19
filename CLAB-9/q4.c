#include <stdio.h>

struct book
{
	char name[100];
	char author[100];
	int bookid;
};

struct book booknum[10];

int main()
{

	
	for (int i = 1; i < 3; i++)
	{
		printf("Enter name of the book %d \n", i);
		scanf("%s", &booknum[i].name);
		printf("Enter name of the Author %d\n", i);
		scanf("%s", &booknum[i].author);
		printf("Enter the book id of book %d\n", i);
		scanf("%d", &booknum[i].bookid);
	}
	for (int i = 1; i < 3; i++)
	{
		printf("The name of the book is %s \n", booknum[i].name);
		printf("the name of the Author is %s\n", booknum[i].author);
		printf("the book id of book is %d\n", booknum[i].bookid);
	}
	return 0;
}