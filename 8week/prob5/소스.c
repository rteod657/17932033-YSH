#include <stdio.h>

void input_data(int* ap, int* bp);
void swap_data(void);
void print_data(int a, int b);
int a, b;

int main(void)
{
    input_data(&a, &b);
    swap_data();
    print_data(a, b);


    return 0;
}

void input_data(int* ap, int* bp)  //입력 받는 data
{
    printf("두 정수 입력 : ");
    scanf_s("%d %d", ap, bp);
}

void swap_data(void) // 입력받은 정수를 바꿈
{
    int temp;
    temp =a;
    a = b;
    b = temp;
}

void print_data(int a, int b)  // 바뀐 두 정수를 출력
{
    printf("두 정수 출력 : %d, %d", a, b);
}