#include<stdio.h>

int main(void)
{
  while (1)
  {
	float a, b, c, d = 0;  //ù ��° �Լ� ex) ax+by+cz=d
	float e, f, g, h = 0;  //�� ��° �Լ� ex) ex+fy+gz=h
	float i, j, k, l = 0;  //�� ��° �Լ� ex) ix+jy+kz=l
	float det_A, det_x, det_y, det_z = 0;  // ���� ����
	float x, y, z;

	printf("=================================\n");
	printf("ex : 5 -6 2 8 �̷��� �Է����ּ���\n");
	printf("�������� 0 0 0 0 �� �Է����ּ���\n");
	printf("=================================\n");

	printf("ù ��° �Լ� �Է� : ");
	scanf_s("%f %f %f %f", &a, &b, &c, &d);

	if (a == 0) if (b == 0) if (c == 0) if (d == 0) break; // 0 0 0 0�� �Է��� �� ���α׷� ����

	printf("�� ��° �Լ� �Է� : ");
	scanf_s("%f %f %f %f", &e, &f, &g, &h);
	printf("�� ��° �Լ� �Է� : ");
	scanf_s("%f %f %f %f", &i, &j, &k, &l);

	printf("=================================\n");
	printf("%.2fx\t%.2fy\t%.2fz\t=\t%.2f\n", a, b, c, d);  // �Ҽ��� 2�ڸ� ���� ǥ��
	printf("%.2fx\t%.2fy\t%.2fz\t=\t%.2f\n", e, f, g, h);
	printf("%.2fx\t%.2fy\t%.2fz\t=\t%.2f\n\n", i, j, k, l);
	printf("=================================\n");

	det_A = (a * f * k) + (e * j * c) + (b * g * i) - (c * f * i) - (j * g * a) - (k * b * e);  // ũ���� �� ���� ����
	det_x = (d * f * k) + (h * j * c) + (b * g * l) - (c * f * l) - (j * g * d) - (k * b * h);
	det_y = (a * h * k) + (e * l * c) + (d * g * i) - (c * h * i) - (l * g * a) - (k * d * e);
	det_z = (a * f * l) + (e * j * d) + (b * h * i) - (d * f * i) - (j * h * a) - (l * b * e);
	x = det_x / det_A;
	y = det_y / det_A;
	z = det_z / det_A;

	printf("det_A :  %.2f\n", det_A);
	printf("det_x :  %.2f\n", det_x);
	printf("det_y :  %.2f\n", det_y);
	printf("det_z :  %.2f\n\n", det_z);
	printf("=================================\n");
	printf("x :  %.2f\n", x);
	printf("y :  %.2f\n", y);
	printf("z :  %.2f\n", z);

  }
}