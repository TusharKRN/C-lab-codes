#include <stdio.h>

struct book
{
	char name[100];
	char author[100];
	int bookid;
	int price;
};

struct book booknum[10];

int main()
{

	int i;
	for (i = 1; i < 3; i++)
	{
		printf("Enter name of the book %d \n", i);
		scanf("%s", &booknum[i].name);
		printf("Enter name of the Author %d\n", i);
		scanf("%s", &booknum[i].author);
		printf("Enter the book id of book %d\n", i);
		scanf("%d", &booknum[i].bookid);
		printf("enter the price of the book %d\n", i);
		scanf("%d", &booknum[i].price);
	}

	if (booknum[1].price > booknum[2].price)
		printf("The maximum cost book is %s", booknum[1].name);

	else
		printf("The maximum cost book is %s", booknum[2].name);

	return 0;
}