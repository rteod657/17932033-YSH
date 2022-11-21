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
  Book b1 = { "혼자공부하는 c 언어", "서현우", 25000,500 };
  Book b2 = { "혼자연구하는 c++", "김상형",33000,400 };
  Book b3 = { "혼자공부하는 자바","신용권",21600 ,300 };

  /* books[2]의 멤버 변수 출력하기 */
  printf("첫 번째 책의 제목은 %s이고, 저자는 %s이며,가격은 %d, 페이지 수는 %d입니다.\n", b1.title, b1.author, b1.price, b1.page);
  printf("두 번째 책의 제목은 %s이고, 저자는 %s이며,가격은 %d, 페이지 수는 %d입니다.\n", b2.title, b2.author, b2.price, b2.page);
  printf("세 번째 책의 제목은 %s이고, 저자는 %s이며,가격은 %d, 페이지 수는 %d입니다.\n", b3.title, b3.author, b3.price, b3.page);

  return 0;
}