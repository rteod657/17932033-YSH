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

  printf("���� �Է� : ");
  scanf_s("%d", &integer);
  printf("�Ǽ� �Է� : ");
  scanf_s("%lf", &real_num);
  printf("���� �Է� : ");
  scanf_s("%s", letter,100);
  printf("���ڿ� �Է� : ");
  scanf_s("%s", str,100);

  fopen_s(&fp, "test.txt", "wt");
  fprintf(fp, "%d %lf %s %s", integer, real_num,letter, str);
  fclose(fp);

  fopen_s(&fp, "test.txt", "rt");
  if (fp == NULL)
  {
	fprintf(stderr, "���� ���� ����\n");
	exit(1);
  }
  int c = fscanf_s(fp, "%d %lf %s %s", &integer2, &real_num2, letter2,100,str2, 100);
  printf("\n\n�Է¿� ������ ������ �� : %d", c);
  printf("\n======================= \n");
  printf("�Է°��\n���� �Է� ��� : %d\n�Ǽ� �Է� ��� : %.2f\n���� �Է� ��� : %s\n���ڿ� �Է� ��� : %s", integer2, real_num2, letter2, str2);
  
  fclose(fp);

  return 0;

}