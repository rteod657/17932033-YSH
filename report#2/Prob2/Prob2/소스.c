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
	temp[i] = rand() % 101;                                             // 1~100까지의 숫자
  }

  printf("랜덤으로 나온 난수\n");

  for (i = 0; i < 5; i++)                                                   // 무작위 정수 5가지  뽑기
  { 
	printf("%d ", temp[i]);
  }

  for (i = 0; i < 5; i++)                                                    // 랜덤으로 나온 숫자의 총합
  {
	sum += temp[i];
  }
  printf("\n\n총합 :  %d", sum);

  average = sum / 5.0;                                                   //평균

  for (i = 0; i < 5; i++)                                                  //분산
  {
	dispersion = ((temp[i] - average) * (temp[i] - average)) / 5;
  }

  standard_deviation = sqrt(dispersion);              //표준편차

  printf("\n평균 :  %.2f\n", average);
  printf("분산 :  %.2f\n", dispersion);
  printf("표준편차 :  % .2f\n\n", standard_deviation);

  return 0;
}