#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

struct MyStruct
{
	int x;
	int y;



};

struct MyStruct createPoint(int x, int y)
{
	struct MyStruct newStruct;
	newStruct.x = x;
	newStruct.y = y;

	return newStruct;
};

int main() {

	struct MyStruct p1 = createPoint(10, 20);

	printf("%d %d", p1.x, p1.y);



	return 0;
}

/*
	+ class: định nghĩa cho 1 tẹp dữ liệu, khái niệm chung chung
	+ Object: cụ thể cho cái chung chung đó

	+ Cấp phát tĩnh:
	+ Cấp phát động:

	+ Vừa định nghĩa, vừa khai báo, vừa gán
		class Dan_ong {
		}; *Thanh = new Dan_ong;


	+ public:
	+ private:
*/