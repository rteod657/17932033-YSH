#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include<math.h>




int main()
{
  int i;
  int temp[5] = { 0 };
  double average = 0;
  double dispersion = 0;
  double standard_deviation = 0;
  int sum = 0;

  srand((int)time(NULL));

  for (i = 0; i < 5; i++)
  {
	temp[i] = rand() % 101;                                             // 1~100������ ����
  }

  printf("�������� ���� ����\n");

  for (i = 0; i < 5; i++)                                                   // ������ ���� 5����  �̱�
  { 
	printf("%d ", temp[i]);
  }

  for (i = 0; i < 5; i++)                                                    // �������� ���� ������ ����
  {
	sum += temp[i];
  }
  printf("\n\n���� :  %d", sum);

  average = sum / 5.0;                                                   //���

  for (i = 0; i < 5; i++)                                                  //�л�
  {
	dispersion = ((temp[i] - average) * (temp[i] - average)) / 5;
  }

  standard_deviation = sqrt(dispersion);              //ǥ������

  printf("\n��� :  %.2f\n", average);
  printf("�л� :  %.2f\n", dispersion);
  printf("ǥ������ :  % .2f\n\n", standard_deviation);

  return 0;
}