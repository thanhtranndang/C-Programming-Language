#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
struct myStructure {
    int myNum;
    char myLetter;
    double GPA;
    char lop;
};
typedef struct myStructure SV;
int main() {
    // Commit Initial 2
    SV a;

    printf("Nhap myNum: ");
    scanf("%d", &a.myNum);
    getchar(); // Đọc ký tự newline còn sót lại sau khi nhập myNum

    printf("Nhap myLetter: ");
    scanf(" %c", &a.myLetter); // Sử dụng " %c" để bỏ qua ký tự newline

    printf("Nhap GPA va lop: ");
    scanf("%lf %c", &a.GPA, &a.lop);

    printf("%d %c %.2f %c\n", a.myNum, a.myLetter, a.GPA, a.lop);

    SV b = a;

    return 0;
}


/*
    1. Struct lồng nhau
*/