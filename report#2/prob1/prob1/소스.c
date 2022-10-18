#include<stdio.h>
#include<string.h>   // strcmp()를 사용하기 위하여

int main()
{
  char password[] = "a981224";
  char user[15];

  printf("비밀번호 입력 프로그램\n");
  printf("비밀번호 힌트 나의 생일\n");

  while (1)
  {
	printf("패스워드 입력 : ");
	scanf_s("%s", user, 15);

	if (strcmp(password, user) != 0) // password와 user의 문자열을 비교 
	{
	  printf("일치하지 않습니다\n\n");
	}

	else
	{
	  printf("일치합니다\n\n");
	  break;
	}
  }
  return 0;
}