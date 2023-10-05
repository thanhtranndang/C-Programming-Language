#include <stdio.h>
#include <stdlib.h>

// Kiểm tra chuỗi
int Length(char str[]) { // nhận mảng kí tự 'str' làm đối số
	int i = 0;			
	while (str[i] != '\0') // đếm số ký tự cho đến khi gặp NULL, trả về độ dài chuỗi
	{
		++i;         
	}
		return i;
}

// Đảo ngược chuỗi
char* Reverse(char str[]) {
	int length = Length(str); // tính độ dài chuỗi
	char* temp = (char*)malloc((length + 1) * sizeof(char)); // cấp phát bộ nhớ cho biến temp
	if (length == '\0')
	{
		// kiểm tra xem cấp phát bộ nhớ, lỗi in thông báo
		fprintf(stderr, "Khong the cap phat bo nho!\n");
		exit(1);
	}
	for (int i = 0; i < length; i++) // dòng vòng lặp để sao chép chuỗi từ chuỗi ban đầu sang biến temp, nhưng ngược lại
	{
		temp[i] = str[length - 1 - i]; // 
	}
	temp[length] = '\0';
	return temp;
}

void disPlay(char str[]) {
	int length = Length(str);
	printf(" Chuoi sau khi dao nguoc:");
	for (int i = length - 1; i >= 0; i--)
	{
		printf("%c", str[i]);
	}
}

int main() {

	char* str[100];
	printf("Nhap chuoi: ");
	fgets(str, 100, stdin);
	Reverse(str);
	disPlay(str);

	return 0;
}