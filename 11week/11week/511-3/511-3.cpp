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
	printf("현재 방향 : 위");
	break;

  case DOWN:
	printf("현재 방향 : 아래"); 
	break;

  case LEFT: 
	printf("현재 방향 : 왼쪽");
	break;

  case RIGHT: 
	printf("현재 방향 : 오른쪽");
	break;
  }

  return 0;
}