#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void calculate1(double X1[100])
{
  int i = 0, count = 0;
  double r1, r2, v, k, z;

  while (i < 100)
  {
  lable1: r1 = (double)rand() / 32767; // rand() �ִ� : 32767
    r2 = (double)rand() / 32767;  // 0~1 ������ ���� �߻�
    v = sqrt(2 / exp(1.0)) * (2 * r2 - 1);     //v�� ���ϴ� �� (1�ܰ�)
    z = v / r1;                                                // z���ϴ� ��   (2�ܰ�)
    k = ((double)1 / 4) * z * z;     //k ���ϴ� ��  (3�ܰ�)

    if (k < 1 - r1)
    {
      X1[i] = z;
      i++;
    }
    else if ((k > (0.259 / r1) + 0.35) || (k > log(r1)))  // (4�ܰ�)
      goto lable1;                       // start1���� �ٽ� ���ư�
  }
}

void calculate2( double X2[100])
{
  int i = 0, count = 0;
  double r1, r2, v, k, z;
  // x1 ���ϴ� �Ͱ� ���� x2 ���ϱ�
  // X2 ���Ժ��� Ȯ������ 100�� ����
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

  // X1 ���Ժ��� Ȯ������ 100�� ����

  calculate1(X1);
  calculate2(X2);
  for (i = 0; i < 100; i++)    // ǥ�� �ȿ� �ִ��� �Ǵ�
  {
    if ((1 * X1[i] >= -1 && 1 * X1[i] <= 1) && (1.2 * X2[i] >= -1 && 1.2 * X2[i] <= 1))
      count++;
  }

  printf("100ȸ �� %dȸ ����\n", count);
  printf("���� Ȯ�� : %.3lf\n", (double)count / 100);

  return 0;
}
