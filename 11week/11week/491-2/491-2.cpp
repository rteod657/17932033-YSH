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
  printf("과자의 가격과 열량을 입력하세요 : ");
  scanf_s("%d%d", &snack.price, &snack.calories);

  printf("과자의 가격 : %d원\n", snack.price);
  printf("과자의 칼로리 : %d kcal\n", snack.calories);


  return 0;
}