#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void input_nums(int* lotto_nums)
{
  int num;
  int i, j;
  int dup;

  for (i = 0; i < 6; i++)
  {
	printf("��ȣ �Է� :  ");
	scanf_s("%d", &num);
	dup = 0;
	for (j = 0; j < 6; j++)
	{
	  if (num == lotto_nums[j])
	  {
		dup = 1;
		break;
	  }
	}
	if (!dup)
	{
	  lotto_nums[i] = num;
	}
	else
	{
	  printf("���� ��ȣ�� �ֽ��ϴ�!\n");
	  i--;
	}
  }

}
void print_nums(int* lotto_nums)
{
  int i;
  printf("�ζ� ��ȣ : ");		
  for (i = 0; i < 6; i++)
  {
	printf("%d\t", lotto_nums[i]);
  }
}

int main()
{
  int lotto_nums[6];

  input_nums(lotto_nums);
  print_nums(lotto_nums);

  return 0;
}

