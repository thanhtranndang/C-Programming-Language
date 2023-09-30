#include <stdio.h>
#include <string.h>

struct Person
{
	char* firstName;
	char* lastName;
	int age;
};

typedef struct Person Person;

int main() {

	/*
		   struct Person Person1, Person2, * personPtr;

		   Person1.firstName = " Tran Dang";
		   Person1.lastName = "Thanh";
		   Person1.age = 21;

		   Person2 = Person1;
	*/

	Person Person1 = {
	   "Tran Dang", "Thanh", 21
	};

	Person* PersonPtr, a[100];
	/*
		Nếu muốn ngắn gọn hơn thì dùng
		"typedef struct Person" lúc đó chỉ cần khai báo
		Person Person1 = {
		"Tran Dang", "Thanh", 21
			};
	*/

	// Đối với biến thường thì dùng dấu .
	printf("\nMy Infor:\n Firstname:%s\n LastName: %s\n Age: %d",
		Person1.firstName, Person1.lastName, Person1.age);


	return 0;
}


/*
	1. Định nghĩa
	2. Khai báo biến struct
	3. Cách truy cập dữ liệu thành phần
	4. Các toán tử hợp lệ với kiểu struct
	5. Ví dụ minh họa
*/