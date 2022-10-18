
#include<stdio.h>
#include<stdlib.h>     // rand() 때문에 포함
#include<time.h>

void matrix_multiplication(int n[][3], int m[][2])    // 2x3, 3x2의 행렬을 곱하는 함수
{
  int i, j, k;
  int sum;
  int s[2][2];

  for (i = 0; i < 2; i++)
  {
    for (j = 0; j < 2; j++)
    {
      sum = 0;

      for (k = 0; k < 3; k++)
      {
        sum += n[i][k] * m[k][j];
      }
      s[i][j] = sum;
    }
  }

  printf(" \n결과 값\n");
  for (i = 0; i < 2; i++)
  {
    for (j = 0; j < 2; j++)
    {
      printf("%d\t", s[i][j]);
    }
    printf("\n");
  }
}


int main(void)
{
  srand((unsigned)time(NULL));
  int i, j = 0;
  int n[2][3] = { 0 };
  int m[3][2] = { 0 };


  printf("n 배열 출력\n");            //랜덤으로 2x3 행렬을 출력
  for (i = 0; i < 2; i++)
  {
    for (j = 0; j < 3; j++)
    {
      n[i][j] = rand() % 20;
      printf("[%d]  ", n[i][j]);
    }
    printf("\n");
  }

  printf("\n\n");
  printf("m 배열 출력\n");          //랜덤으로 3x2 행렬을 출력
  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 2; j++)
    {
      m[i][j] = rand() % 20;
      printf("[%d]  ", m[i][j]);
    }
    printf("\n");
  }

  matrix_multiplication(n, m);   // 위에 계산된 함수를 부름

}

