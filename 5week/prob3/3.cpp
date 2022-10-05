#include<stdio.h>

int add(int x, int y)
{
	return x + y;
}

int sub(int x, int y)
{
	return x - y;
}

int mul(int x, int y)
{
	return x * y;
}

int div(int x, int y)
{
	return x / y;
}

int main()
{
	int x, y;

	printf("Enter the first integer : ");
	scanf_s("%d", &x);
	printf("Enter the second integer : ");
	scanf_s("%d", &y);

	printf("add : %d+%d=%d\n", x, y, add(x, y));
	printf("sub : %d-%d=%d\n", x, y, sub(x, y));
	printf("mul : %d*%d=%d\n", x, y, mul(x, y));
	printf("div : %d/%d=%d\n", x, y, div(x, y));

	return 0;
}
