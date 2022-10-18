
#include<stdio.h>
#include<stdlib.h>     // rand() ������ ����
#include<time.h>

void matrix_multiplication(int n[][3], int m[][2])    // 2x3, 3x2�� ����� ���ϴ� �Լ�
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

  printf(" \n��� ��\n");
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


  printf("n �迭 ���\n");            //�������� 2x3 ����� ���
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
  printf("m �迭 ���\n");          //�������� 3x2 ����� ���
  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 2; j++)
    {
      m[i][j] = rand() % 20;
      printf("[%d]  ", m[i][j]);
    }
    printf("\n");
  }

  matrix_multiplication(n, m);   // ���� ���� �Լ��� �θ�

}

