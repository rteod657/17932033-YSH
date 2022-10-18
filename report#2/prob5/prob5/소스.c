#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void calculate1(double X1[100])
{
  int i = 0, count = 0;
  double r1, r2, v, k, z;

  while (i < 100)
  {
  lable1: r1 = (double)rand() / 32767; // rand() 최댓값 : 32767
    r2 = (double)rand() / 32767;  // 0~1 사이의 난수 발생
    v = sqrt(2 / exp(1.0)) * (2 * r2 - 1);     //v를 구하는 식 (1단계)
    z = v / r1;                                                // z구하는 식   (2단계)
    k = ((double)1 / 4) * z * z;     //k 구하는 식  (3단계)

    if (k < 1 - r1)
    {
      X1[i] = z;
      i++;
    }
    else if ((k > (0.259 / r1) + 0.35) || (k > log(r1)))  // (4단계)
      goto lable1;                       // start1으로 다시 돌아감
  }
}

void calculate2( double X2[100])
{
  int i = 0, count = 0;
  double r1, r2, v, k, z;
  // x1 구하는 것과 같이 x2 구하기
  // X2 정규분포 확률변수 100개 생성
  i = 0;
  while (i < 100)
  {
  lable2: r1 = (double)rand() / 32767;
    r2 = (double)rand() / 32767;
    v = sqrt(2 / exp(1.0)) * (2 * r2 - 1);
    z = v / r1;
    k = ((double)1 / 4) * z * z;
    if (k < 1 - r1) {
      X2[i] = z;
      i++;
    }
    else if ((k > (0.259 / r1) + 0.35) || (k > log(r1)))
      goto lable2;
  }
}

int main()
{
  int i = 0, count = 0;
  double X1[100], X2[100];

  // X1 정규분포 확률변수 100개 생성

  calculate1(X1);
  calculate2(X2);
  for (i = 0; i < 100; i++)    // 표적 안에 있는지 판단
  {
    if ((1 * X1[i] >= -1 && 1 * X1[i] <= 1) && (1.2 * X2[i] >= -1 && 1.2 * X2[i] <= 1))
      count++;
  }

  printf("100회 중 %d회 성공\n", count);
  printf("성공 확률 : %.3lf\n", (double)count / 100);

  return 0;
}
