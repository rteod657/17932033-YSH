#include<stdio.h>

int main(void)
{
	double weight;
	double height;
	double bmi;

	double height_m;

	printf("write weight(kg): ");
	scanf_s("%lf", &weight);
	printf("write height(cm) :");
	scanf_s("%lf", &height);

	height_m = height / 100;
	bmi = weight / (height_m * height_m);

	printf("your bmi is %lf\n", bmi);

	if (bmi >= 20, bmi < 25)
	{
		printf("good job");
	}
	else if (bmi < 20)
	{
		printf("you gain weight ");
	}
	else if (bmi > 25)
	{
		printf("diet please");
	}

	return 0;

}