#include<stdio.h>

int main(void)
{
  float a, b, c,d= 0;
  float e, f,g,h = 0;
  float i,j,k,l = 0;


  printf("================================");
  printf(" ex : 5x+3y+4z=-2  >>>>>>>>>>> 5 3 4 -2 enter");
  printf("Enter 0 0 0 0 to exit");
  printf("================================");


  printf("Enter the first function :   ");
  scanf_s("%f %f%f%f", &a, &b, &c, &d);

  printf("Enter the secound function :   ");
  scanf_s("%f %f%f%f", &e, &f,&g, &h);

  printf("Enter the third function :   ");
  scanf_s("%f %f%f%f", &i, &j, &k, &l);

  return 0;
}