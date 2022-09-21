#include<stdio.h>

int main(void)
{
	char ch;

	printf("Enter characters : ");
	scanf_s("%c", &ch);
	printf("ASCII code value of %c character is %d", ch, ch);
	return 0;
}