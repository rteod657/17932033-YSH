#include<stdio.h>

int main(void)
{
	int age, chest;
	char size;

	printf("Input your age : ");
	scanf_s("%d", &age);

	printf("Input your chest size : ");
	scanf_s("%d", &chest);

	if (age < 20)
	{
		if (chest < 85)
			size = 'S';
		else if (chest < 95)
			size = 'M';
		else
			size = 'L';
	}
	else if (age>=20)
	{
		if (chest < 90)
			size = 'S';
		else if (chest < 100)
			size = 'M';
		else
			size = 'L';
	}

	printf("your size is %c \n", size);

	return 0;

}