#include<stdio.h>

int main(void)
{
	int chest = 0;
	char size;

	printf("Input your chest size : ");
	scanf_s("%c", &chest);

	if (chest <= 90)
	{
		size = 's';
	}
	else if ((chest > 90) && (chest <= 100))
	{
		size = 'M';
	}
	else
	{
		size = 'L';
	}

	printf("your chest size : %c",size);

	return 0;

}