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

  printf("이름 : %s\n", mp->name);
  printf("나이 : %d\n", mp->age);
  printf("성별 : %c\n", mp->sex);
  printf("키 : %.1lf", mp->height);


  return 0;
}