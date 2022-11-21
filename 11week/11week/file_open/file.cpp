#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int main(void)
{
  FILE* fp = NULL;
  char str[100], str2[100];
  char letter[100], letter2[100];
  double real_num, real_num2;
  int integer, integer2;

  printf("정수 입력 : ");
  scanf_s("%d", &integer);
  printf("실수 입력 : ");
  scanf_s("%lf", &real_num);
  printf("문자 입력 : ");
  scanf_s("%s", letter,100);
  printf("문자열 입력 : ");
  scanf_s("%s", str,100);

  fopen_s(&fp, "test.txt", "wt");
  fprintf(fp, "%d %lf %s %s", integer, real_num,letter, str);
  fclose(fp);

  fopen_s(&fp, "test.txt", "rt");
  if (fp == NULL)
  {
	fprintf(stderr, "파일 열기 오류\n");
	exit(1);
  }
  int c = fscanf_s(fp, "%d %lf %s %s", &integer2, &real_num2, letter2,100,str2, 100);
  printf("\n\n입력에 성공한 데이터 수 : %d", c);
  printf("\n======================= \n");
  printf("입력결과\n정수 입력 결과 : %d\n실수 입력 결과 : %.2f\n문자 입력 결과 : %s\n문자열 입력 결과 : %s", integer2, real_num2, letter2, str2);
  
  fclose(fp);

  return 0;

}