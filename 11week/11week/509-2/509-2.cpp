#include<stdio.h>
#include<stdlib.h>

typedef struct train Train;

struct train
{
  int seats;
  Train* next;
};

int main(void)
{
  Train* head = NULL, * tail = NULL;
  int i;
  for (i = 0; i < 5; i++)
  {
	if (head == NULL)
	{
	  head = tail = (Train*)malloc(sizeof(Train));
	  printf("Head\t");
	}
	else
	{
	  tail->next = (Train*)malloc(sizeof(Train));
	  tail = tail->next;
	  printf("tail\t");
	}
  }

  return 0;
}