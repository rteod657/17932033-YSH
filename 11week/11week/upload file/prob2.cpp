#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int main(void)
{
  FILE* fp = fopen("yolo_bbox_data.txt", "r");
  FILE* fp2 = fopen("yolo_label_data.txt", "r");
  char buf[1000] = { 0, };
  char buf2[1000] = { 0, };

  printf("ù��° ������ ����\n");
  fread(buf, 1, 1000, fp);
  printf("%s", buf);

  printf("\n\n�ι�° ������ ����\n");
  fread(buf2, 1, 1000, fp2);
  printf("%s", buf2);
  fclose(fp);

  return 0;
}