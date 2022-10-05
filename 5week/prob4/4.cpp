#include<stdio.h>

int rec_func(int num);

int main()
{
	while (1)
	{
		int number;
		printf("\nEnter 0 to exit\n");
		printf("\nEnter an integer value : ");
		scanf_s("%d", &number);
		printf("The sum from 1 to %d is %d", number, rec_func(number));

		if (number == 0) break;
	}
}

int rec_func(int num)
{
	if (num <= 0) return 0;
	return num + rec_func(num - 1);
}