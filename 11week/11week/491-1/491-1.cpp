#include<stdio.h>
#include<string.h>

struct book
{
  char title[30];
  char author[20];
  int price;
  int page;
};

int main() {

  typedef struct book Book;   // struct book == Book
  Book b1 = { "ȥ�ڰ����ϴ� c ���", "������", 25000,500 };
  Book b2 = { "ȥ�ڿ����ϴ� c++", "�����",33000,400 };
  Book b3 = { "ȥ�ڰ����ϴ� �ڹ�","�ſ��",21600 ,300 };

  /* books[2]�� ��� ���� ����ϱ� */
  printf("ù ��° å�� ������ %s�̰�, ���ڴ� %s�̸�,������ %d, ������ ���� %d�Դϴ�.\n", b1.title, b1.author, b1.price, b1.page);
  printf("�� ��° å�� ������ %s�̰�, ���ڴ� %s�̸�,������ %d, ������ ���� %d�Դϴ�.\n", b2.title, b2.author, b2.price, b2.page);
  printf("�� ��° å�� ������ %s�̰�, ���ڴ� %s�̸�,������ %d, ������ ���� %d�Դϴ�.\n", b3.title, b3.author, b3.price, b3.page);

  return 0;
}