#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int main() {
	char a[1000];
	scanf("%s", a);
	int cnt[26] = { 0 };
	for (int i = 0; i < strlen(a); i++)
	{
		cnt[a[i] - 'a']++;
	}
	for (int i = 0; i < 26; i++)
	{
		if (cnt[i] != 0) {
			printf("%c %d\n", (i + 'a'), cnt[i]);
		}
	}
}


/*
	Bài 2. Nhập vào một xâu kí tự và chuyển các kí tự trong xâu thành kí tự in thường
	Input: Xâu đầu vào không qua 1000 kí tự
	Output: In kết quả trên 1 dòng
	-------------------------------------
			char a[1000];
			gets(a);
			for (int i = 0; i < strlen(a); i++)
			{
				a[i] = tolower(a[i]);
			}
			printf("%s", a);
*/


/*
	Bài 3. Đếm số lượng chữ cái, chữ số, kí tự đặc biệt
	Input: Xâu đầu vào không qua 1000 kí tự
	Output: In kết quả trên 1 dòng
	-------------------------------------
			int cnt1 = 0, cnt2 = 0;
			char a[1000];
			gets(a);
			for (int i = 0; i < strlen(a); i++)
			{
				if (isalpha(a[i]))
				{
					cnt1++;
				}
				else if (isdigit(a[i])) {
					cnt2++;
				}
			}

			printf("%d %d %d", cnt1, cnt2, strlen(a) - cnt1 - cnt2);
*/

/*
	Bài 4. Đếm số lần xuất hiện của các kí tự trong 1 xâu

			char a[1000];
			scanf("%s", a);
			int cnt[26] = { 0 };
			for (int i = 0; i < strlen(a); i++)
			{
				cnt[a[i] - 'a']++;
			}
			for (int i = 0; i < 26; i++)
			{
				if (cnt[i] != 0) {
					printf("%c %d\n", (i + 'a'), cnt[i]);
				}
			}
*/