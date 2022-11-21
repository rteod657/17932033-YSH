#include <stdio.h>
#include <stdlib.h>

void saveData(int* nInteger, int nMax);
void printData(int* nInteger, int nMax);

int main(void)
{
  int* nInteger;
  int nMax;
  printf("정수를 입력 : ");
  scanf_s("%d", &nMax);
  nInteger = (int*)calloc(nMax, sizeof(int));
  saveData(nInteger, nMax);
  printData(nInteger, nMax);
  return 0;
}

void saveData(int* nInteger, int nMax)
{
  int i, k;
  for (i = 0; i < nMax; i++)
  {
    nInteger[i] = 0;
  }
  for (i = 2; i < nMax; i++)
  {
    for (k = 2; k < i; k++)
    {
      if (i % k == 0) break;
    }
    if (i == k)
    {
      nInteger[i - 2] = i; // i가 2부터 시작하기 때문에, i-2
    }
  }
}

void printData(int* nInteger, int nMax)
{
  int i;
  for (i = 0; i < nMax; i++)
  {
    if (nInteger[i] == 0)
    {
      printf("X\t");
    }
    else
    {
      printf("%d\t", nInteger[i]);
    }
    if ((i + 1) % 5 == 0) printf("\n");
  }
}