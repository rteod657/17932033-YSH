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
	while (1) {
		int x, y;

		printf("Enter 0 in the first integer\n");
		printf("Enter 0 in the second integer\n");
		printf("Enter the first integer : ");
		scanf_s("%d", &x);
		printf("Enter the second integer : ");
		scanf_s("%d", &y);

		if (x == 0 && y == 0) break;

		printf("add : %d+%d=%d\n", x, y, add(x, y));
		printf("sub : %d-%d=%d\n", x, y, sub(x, y));
		printf("mul : %d*%d=%d\n", x, y, mul(x, y));
		printf("div : %d/%d=%d\n", x, y, div(x, y));

	}

}
