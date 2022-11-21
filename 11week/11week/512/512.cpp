#include<stdio.h>
#include <stdio.h>
#include <string.h>

typedef struct
{
  double average;
  int number;
  int korean;
  int english;
  int math;
  int total;
  char grade;
  char name[20];
} Student;

void inputData(Student*);
void setTotalAndAverageAndGrade(Student*);
void sort(Student**);

void main(void)
{
  Student student[5];

  //학번, 이름, 과목 점수 입력
  inputData(student);

  //총점과 평균, 학점을 계산하여 저장
  setTotalAndAverageAndGrade(student);

  Student* pStudent[5];

  //포인터와 구조체 연결
  for (int i = 0; i < 5; i++)
  {
	pStudent[i] = &student[i];
  }

  //총점 순으로 정렬
  sort(pStudent);

  printf("# 정렬 전 데이터...\n");
  for (int i = 0; i < 5; i++)
  {
	printf("%5d", student[i].number);
	printf("%8s", student[i].name);
	printf("%5d", student[i].korean);
	printf("%5d", student[i].english);
	printf("%5d", student[i].math);
	printf("%5d", student[i].total);
	printf("%5.1lf", student[i].average);
	printf("%5c", student[i].grade);
	printf("\n");
  }
  printf("\n");

  printf("# 정렬 후 데이터...\n");
  for (int i = 0; i < 5; i++)
  {
	printf("%5d", pStudent[i]->number);
	printf("%8s", pStudent[i]->name);
	printf("%5d", pStudent[i]->korean);
	printf("%5d", pStudent[i]->english);
	printf("%5d", pStudent[i]->math);
	printf("%5d", pStudent[i]->total);
	printf("%5.1lf", pStudent[i]->average);
	printf("%5c", pStudent[i]->grade);
	printf("\n");
  }
}

void inputData(Student* pStudent)
{
  for (int i = 0; i < 5; i++)
  {
	printf("%d번째 학생\n", i+1);
	printf("학번 : ");
	scanf_s("%d", &(pStudent[i].number));
	getchar();

	printf("이름 : ");
	fgets(pStudent[i].name, 20, stdin);
	pStudent[i].name[strlen(pStudent[i].name) - 1] = '\0';

	printf("국어, 영어, 수학 점수 : ");
	scanf_s("%d%d%d", &(pStudent[i].korean), &(pStudent[i].english), &(pStudent[i].math));
  }
}

void setTotalAndAverageAndGrade(Student* pStudent)
{
  for (int i = 0; i < 5; i++)
  {
	pStudent[i].total = 0;
	pStudent[i].total += pStudent[i].korean;
	pStudent[i].total += pStudent[i].english;
	pStudent[i].total += pStudent[i].math;
	pStudent[i].average = pStudent[i].total / 3.0;

	if (pStudent[i].average >= 70)
	{
	  if (pStudent[i].average >= 80)
	  {
		if (pStudent[i].average >= 90)
		{
		  pStudent[i].grade = 'A';
		}
		else
		{
		  pStudent[i].grade = 'B';
		}
	  }
	  else
	  {
		pStudent[i].grade = 'C';
	  }
	}
	else
	{
	  pStudent[i].grade = 'F';
	}
  }
}

void sort(Student** ppStudent)
{
  int count = 4;
  while (count >= 1)
  {
	for (int i = 0; i < count; i++)
	{
	  if (ppStudent[i]->total < ppStudent[i + 1]->total)
	  {
		Student* temp;
		temp = ppStudent[i];
		ppStudent[i] = ppStudent[i + 1];
		ppStudent[i + 1] = temp;
	  }
	}
	count--;
  }
}