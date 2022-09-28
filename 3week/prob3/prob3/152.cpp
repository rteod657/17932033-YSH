#include<stdio.h>

int main(void)
{
	int a = 0, b = 0;
	char c;         //연산 변수(+,-,*,/)

	printf("Enter your arithmetic operation : ");
	scanf_s("%d %c %d", &a, &c, 1,& b);

	switch (c)
	{
	case '+':
		printf("operation value   :  %d+%d=%d", a, b, a + b);
		break;
	case '-':
		printf("operation value  :  %d-%d=%d", a, b, a - b);
		break;
	case '*':
		printf("operation value  :  %d*%d=%d", a, b, a * b);
		break;
	case '/':
		printf("operation value  :  %d/%d=%d", a, b, a /b);
		break;
	}
	return 0;
}