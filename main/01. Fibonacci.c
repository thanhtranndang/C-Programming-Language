/*
	Bài 1. Viết chương trình in 70 số đầu của dãy fibonacci: 1 1 2 3 5 8 13 21 34
	Bài 2. Viết chương trình tìm UCLN và BCNN của 2 số a và b ( 1<= a, b <= 10000)
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void Fibonacci(int n) {
	long long fibo[100];
	fibo[0] = 0;
	fibo[1] = 1;
	for (int i = 2; i < n; i++)
	{
		fibo[i] = fibo[i - 1] + fibo[i - 2];
	}
	for (int i = 2; i < n; i++)
	{
		printf("%lld ", fibo[i]);
	}
}

int main() {
	int n;
	scanf("%d", &n);
	Fibonacci(n);
	return 0;
}