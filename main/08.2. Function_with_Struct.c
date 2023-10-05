#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

struct Point
{
	float toan;
	float ly;
	float hoa;
};
typedef struct Point Point_1;


// Làm việc với con trỏ
void Input(Point_1 *student_1) {
	printf("Nhap Toan:");
	scanf("%f", &(student_1->toan));
	printf("Nhap Ly:");
	scanf("%f", &(student_1->ly));
	printf("Nhap Hoa:");
	scanf("%f", &(student_1->hoa));

}

float TotalPoint(Point_1 student_1) {
	return (student_1.toan + student_1.hoa + student_1.ly) / 3;
}


void disPlay( Point_1 student_1) {
	printf("Diem cua ban\n");
	printf("Toan %.2f\n", student_1.toan);
	printf("Ly %.2f\n", student_1.ly);
	printf("Hoa %.2f\n", student_1.hoa);
	printf("Diem trung binh %.2lf", TotalPoint(student_1));
}

int main() {

	Point_1 hs1;
	Input(&hs1);
	disPlay(hs1);
	return 0;
}