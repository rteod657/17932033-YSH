#include<stdio.h>
#include<string.h>

struct cracker
{
  int price;
  int calories;
};

int main() 
{
  struct cracker snack;   // struct cracker == cracker
  printf("������ ���ݰ� ������ �Է��ϼ��� : ");
  scanf_s("%d%d", &snack.price, &snack.calories);

  printf("������ ���� : %d��\n", snack.price);
  printf("������ Į�θ� : %d kcal\n", snack.calories);


  return 0;
}