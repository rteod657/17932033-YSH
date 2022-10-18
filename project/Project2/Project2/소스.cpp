#include<stdio.h>

int main(void)
{
  while (1)
  {
	float a, b, c, d = 0;
	float e, f, g, h = 0;
	float i, j, k, l = 0;
	float det_A, det_x, det_y, det_z = 0;
	float x, y, z;

	printf("=================================\n");
	printf("ex : 5 -6 2 8 이렇게 입력해주세요\n");
	printf("끝내려면 0 0 0 0 을 입력해주세요\n");
	printf("=================================\n");

	printf("첫 번째 함수 입력 : ");
	scanf_s("%f %f %f %f", &a, &b, &c, &d);

	if (a, b, c, d == 0) break;

	printf("두 번째 함수 입력 : ");
	scanf_s("%f %f %f %f", &e, &f, &g, &h);

	printf("세 번째 함수 입력 : ");
	scanf_s("%f %f %f %f", &i, &j, &k, &l);

	printf("=================================\n");
	printf("%.2fx\t%.2fy\t%.2fz\t=\t%.2f\n", a, b, c, d);
	printf("%.2fx\t%.2fy\t%.2fz\t=\t%.2f\n", e, f, g, h);
	printf("%.2fx\t%.2fy\t%.2fz\t=\t%.2f\n\n", i, j, k, l);
	printf("=================================\n");

	det_A = (a * f * k) + (e * j * c) + (b * g * i) - (c * f * i) - (j * g * a) - (k * b * e);
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
	printf("=================================\n");
  }
}
