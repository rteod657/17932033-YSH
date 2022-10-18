#include<stdio.h>
#include<stdlib.h>     // rand() ������ ����
#include<time.h>

void ascending(int num[]) //��������
{
  int i, j, temp = 0;
  for (i = 0; i < 5; i++)
  {
	for (j = i; j < 5; j++)
	{
	  if (num[i] > num[j])
	  {
		temp = num[i];
		num[i] = num[j];
		num[j] = temp;
	  }
	}
  }
}


void descending(int num[]) //��������
{
  int i, j, temp = 0;
  for (i = 0; i < 5; i++)
  {
	for (j = i; j < 5; j++)
	{
	  if (num[i] < num[j])
	  {
		temp = num[i];
		num[i] = num[j];
		num[j] = temp;
	  }
	}
  }
}


int main()
{
  int i = 0;
  int temp = 0;
  int random_num[5] = { 0 };
  srand((unsigned)time(NULL));                  // �������� ���� �̱�

  for (i = 0; i < 5; i++)                     // ���ڸ� 5���� ����
  {
	random_num[i] = rand();
  }

  for (i = 0; i < 5; i++)
  {
	printf("%d ", random_num[i]);
  }


  ascending(random_num);                           // ����Լ��� �ҷ�����(��������)
  printf("\n\n�������� : ");
  for (i = 0; i < 5; i++)
  {
	printf("%d   ", random_num[i]);
  }

  descending(random_num);                         // ����Լ��� �ҷ�����(��������)
  printf("\n\n�������� : ");
  for (i = 0; i < 5; i++)
  {
	printf("%d   ", random_num[i]);
  }
}