#include<stdio.h>
#include<string.h>

struct marriage
{
  char name[20];
  int age;
  char sex;
  double height;
};

int main()
{
  struct marriage m1 = { "Andy",22,'m',187.5 };
  struct marriage* mp = &m1;

  printf("�̸� : %s\n", mp->name);
  printf("���� : %d\n", mp->age);
  printf("���� : %c\n", mp->sex);
  printf("Ű : %.1lf", mp->height);


  return 0;
}