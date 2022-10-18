#include<stdio.h>

int main(void)
{
  int op1 = 0, op2 = 0;

  printf("두개의 숫자를 입력해 주세요. >");
  scanf_s("%d %d", &op1, &op2);

  printf("%d + %d = %d\n", op1, op2, op1 + op2);
  return 0;

}