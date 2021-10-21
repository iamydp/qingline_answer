#include <stdio.h>
#include <math.h>
int main()
{
	int a, b;
	scanf_s("%d%d", &a, &b);
	if (a % b == 0){
		printf_s("能整除");
	}
	else{
		printf_s("不能整除");
	}
}
