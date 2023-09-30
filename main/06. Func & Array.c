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

void isTall(struct Infor* no_name) {
	(*no_name).tall += 0.1;
}

int main() {
	struct Infor AECayKhe[5] = {
		{ "Thanh", 22, 1.65, 60 },
		{ "Thinh",  20, 1.45, 30 },
		{ "Van",  11, 1.55, 50 }
	}; 

	printf("Chieu cao ban dau cua %s: %.2f\n",AECayKhe[0].name, AECayKhe[0].tall);
	isTall(&AECayKhe[0]);
	printf("Chieu cao ban dau cua %s: %.2f\n", AECayKhe[0].name, AECayKhe[0].tall);

	return 0;
}