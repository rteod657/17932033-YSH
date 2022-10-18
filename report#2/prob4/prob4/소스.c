#include<stdio.h>
#include<stdlib.h>     // rand() 때문에 포함
#include<time.h>

void ascending(int num[]) //오름차순
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


void descending(int num[]) //내림차순
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
  srand((unsigned)time(NULL));                  // 랜덤으로 숫자 뽑기

  for (i = 0; i < 5; i++)                     // 숫자를 5개로 지정
  {
	random_num[i] = rand();
  }

  for (i = 0; i < 5; i++)
  {
	printf("%d ", random_num[i]);
  }


  ascending(random_num);                           // 재귀함수로 불러오기(오름차순)
  printf("\n\n오름차순 : ");
  for (i = 0; i < 5; i++)
  {
	printf("%d   ", random_num[i]);
  }

  descending(random_num);                         // 재귀함수로 불러오기(내림차순)
  printf("\n\n내림차순 : ");
  for (i = 0; i < 5; i++)
  {
	printf("%d   ", random_num[i]);
  }
}