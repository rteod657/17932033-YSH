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

void input_data(int* ap, int* bp)  //�Է� �޴� data
{
    printf("�� ���� �Է� : ");
    scanf_s("%d %d", ap, bp);
}

void swap_data(void) // �Է¹��� ������ �ٲ�
{
    int temp;
    temp =a;
    a = b;
    b = temp;
}

void print_data(int a, int b)  // �ٲ� �� ������ ���
{
    printf("�� ���� ��� : %d, %d", a, b);
}