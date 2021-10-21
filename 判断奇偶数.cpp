#include <stdio.h>
#include <math.h>
int main()
{
	int a;
	scanf_s("%d", &a);
	if (a % 2 == 0) {
		printf_s("偶数");
	}
	else
		printf_s("奇数");
}
//感觉没写全?但是能过
