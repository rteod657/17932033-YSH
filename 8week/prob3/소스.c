#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>


int main(void)

{
    char str1[80];
    char str2[80];
    char str3[80];
    char temp[80];

    printf("세 개의 단어 입력 : ");
    scanf("%s %s %s", str1, str2, str3);

    if (strcmp(str1, str2) > 0)       // str1이 str2보다 사전의 뒤에 나오면 문자열을 바꿈
    {
        strcpy(temp, str1);
        strcpy(str1, str2);
        strcpy(str2, temp);
    }

    else if (strcmp(str1, str3) > 0)  // str1이 str3보다 사전의 뒤에 나오면 문자열을 바꿈
    {
        strcpy(temp, str1);
        strcpy(str1, str3);
        strcpy(str3, temp);
    }

    else (strcmp(str2, str3) > 0);  // str2가 str3보다 사전의 뒤에 나오면 문자열을 바꿈
    strcpy(temp, str2);
    strcpy(str2, str3);
    strcpy(str3, temp);


    printf("%s, %s, %s\n", str1, str2, str3);

    return 0;
}