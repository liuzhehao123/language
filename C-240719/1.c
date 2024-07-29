#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main() {
	int n = 9;
	float* pFloat = (float*)&n;
	printf("n是：%d\n", n);
	printf("pFloat是：%f\n", *pFloat);

	*pFloat = 9.0;
	printf("n的值为：%d\n", n);
	printf("pFloat的值为：%f\n", *pFloat);

	return 0;
}