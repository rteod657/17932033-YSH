#include<stdio.h>
#include<string.h>   // strcmp()�� ����ϱ� ���Ͽ�

int main()
{
  char password[] = "a981224";
  char user[15];

  printf("��й�ȣ �Է� ���α׷�\n");
  printf("��й�ȣ ��Ʈ ���� ����\n");

  while (1)
  {
	printf("�н����� �Է� : ");
	scanf_s("%s", user, 15);

	if (strcmp(password, user) != 0) // password�� user�� ���ڿ��� �� 
	{
	  printf("��ġ���� �ʽ��ϴ�\n\n");
	}

	else
	{
	  printf("��ġ�մϴ�\n\n");
	  break;
	}
  }
  return 0;
}