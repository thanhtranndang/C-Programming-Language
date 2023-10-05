#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

// Cấu trúc lồng nhau

struct Date
{
	int day;
	int month;
	int year;

};

struct Student
{
	struct Date Birthday;
	char name[100];
	int mssv;

};


void Input(struct Student* student) {
	printf("Nhap ten sinh vien: ");
	fgets(student->name,20, stdin);
	student->name[strlen(student->name) - 1] = '\0';

	printf("Nhap ngay sinh: ");
	scanf("%d %d %d ", &student->Birthday.day, &student->Birthday.month, &student->Birthday.year);
	
	printf("Nhap ma so sinh vien: ");
	scanf("%d", &student->mssv);
}

void disPlay(struct Student student) {
	printf("Ten: %s\n", student.name);
	printf("Ngay sinh: %02d/%02d/%04d\n", student.Birthday.day, student.Birthday.month, student.Birthday.year);
	printf("Ma so sinh vien: %d\n", student.mssv);
}


int main() {

	struct Student sv1;
	Input(&sv1);
	disPlay(sv1);
	return 0;
}