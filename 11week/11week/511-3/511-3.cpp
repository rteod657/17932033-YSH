#include<stdio.h>

enum COLOR{ CYAN, MAGENTA, YELLOW = 5, BLACK };
enum ARROW{ UP, DOWN, LEFT, RIGHT };

int main(void)
{
  COLOR my_color = YELLOW;
  ARROW direction = UP;



  for (int c = CYAN; c <= BLACK; c++)
  {
	char direction={0,};
	direction++;
	direction = direction % 4;
	if (c == my_color) break;

  }

  switch (direction)
  {
  case UP:
	printf("���� ���� : ��");
	break;

  case DOWN:
	printf("���� ���� : �Ʒ�"); 
	break;

  case LEFT: 
	printf("���� ���� : ����");
	break;

  case RIGHT: 
	printf("���� ���� : ������");
	break;
  }

  return 0;
}