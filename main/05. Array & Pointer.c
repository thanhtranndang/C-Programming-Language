#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
/*
	Con trỏ: + một biến đặc biệt, ám chỉ một biến x nào đấy thông qua địa chỉ của biến x đó ( &x )
			 + giá trị của nó là địa chỉ biến khác
			 *bo_nhi lấy giá trị tại địa chỉ đã biết : -bo_nhi là địa chỉ, dấu * là lấy giá trị tại địa chỉ đó
			 ------------------------------------------------------------
					 Phép toán trên con trỏ
			 *<con_trỏ>: lấy giá trị của địa chỉ

	Con trỏ và mảng: dùng để duyệt 1 cấu trúc dữ liệu ( trỏ vào được tất cả các vị trí trong mang )

*/


struct Infor
{
	char name[20];
	int age;
	float tall;
	float weight;
};

int main() {
	struct Infor AECayKhe[5] = {
		{ "Thanh", 22, 1.65, 60 },
		{ "Thinh",  20, 1.45, 30 },
		{ "Van",  11, 1.55, 50 }
	}; // Khai báo mảng chứa 3 đối tượng


	/*
		AECayKhe[0] = (struct Infor){ "Thanh", 22, 1.65, 60 };
		AECayKhe[1] = (struct Infor){ "Thinh",  20, 1.45, 30 };
		AECayKhe[2] = (struct Infor){ "Van",  11, 1.55, 50 };
	*/


	/*
		for (int i = 0; i < 3; i++) {
		   printf("Person %d: Age: %d, Tall: %.2f, Weight: %.2f\n", i + 1,
			   AECayKhe[i].age, AECayKhe[i].tall, AECayKhe[i].weight);
	   }
	 */
	struct Infor* no_name = NULL;
	for (no_name = AECayKhe; no_name < AECayKhe + 3; no_name++)
	{
		printf("%s ", (*no_name).name);
		printf("%d \n", no_name->age);
	}




	return 0;
}