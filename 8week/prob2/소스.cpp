
#include<stdio.h>
#include<string.h>

int main(void)
{

	char str[80];
	char res[80];
	const char *star = "*********";
	int lengh;

	printf("�ܾ� �Է� : ");
	scanf_s("%s", str,80);

	lengh = strlen(str);

	if (lengh <= 5)
	{
		strcpy_s(res, str);
	}
	else
	{
		strncpy_s(res, str, 5);
		res[5] = '\0';
		strncat_s(res, star, lengh - 5);
	}
	printf("�Է��� �ܾ� : %s, ������ �ܾ� : %s\n", str, res);
	return 0;

}