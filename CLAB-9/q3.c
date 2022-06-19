// product and difference of two no. using call by reference

#include <stdio.h>

void fun(int x, int y, int *p, int *d)
{
	*p = x * y;
	*d = x - y;
}

int main()
{
	int x, y, prod, diff;
	printf("Enter 2 numbers \n");
	scanf("%d %d", &x, &y);

	fun(x, y, &prod, &diff);
	{
		printf("product = %d\n ", prod);
		printf("difference=%d", diff);
	}
	return 0;
}