#include<stdio.h>

int main(void)
{
	int chest = 95;
	char size;

	printf("chest size : ");
	scanf_s("%c", &chest);

	if (chest <= 90) {
		size = 'S';
		printf("\nyour chest size : S\n");
	}

	else if ((chest > 90) && (chest <= 100))
	{
		size = 'M';
		printf("\nyour chest size : M\n");
	}

	else
	{
		size = 'L';
		printf("\nyour chest size : S\n");
	}
	return  0;

}