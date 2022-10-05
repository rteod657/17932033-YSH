#include<stdio.h>

int main()
{
	int count;
	int dan;


	printf("Please enter multiplication table from 2 to 9 : ");
	scanf_s("%d", &dan);

	if (dan < 10 && dan>1)
	{
		for (count = 1;count < 10;++count)
		{
			printf("%d*%d=%d\n", dan, count, dan * count);
		}
	}
	else(dan >= 10 && dan <= 2);
	{
		printf("You entered it incorrectly.");
	}

	printf("\n");	
}