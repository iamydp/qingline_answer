#include <stdio.h>
#include <math.h>
int main()
{
	float x, y,c;
	scanf_s("%f%f", &x, &y);
	int a, b;
	a = x;
	b = abs(a);
	c = b;						  //本人才疏学浅(笑脸流汗
	printf_s("sin(x):%lf\n", sin(x * 3.1415 / 180));  //操你妈qingline里面的1为角度值,是个人都会认为是弧度制吧
	printf_s("cos(x):%lf\n", cos(x * 3.1415 / 180));
	printf_s("|x|:%f\n", c);
	printf_s("e的x次方:%f\n", exp(x));
	printf_s("x的y次方:%f", pow(x, y));
}
