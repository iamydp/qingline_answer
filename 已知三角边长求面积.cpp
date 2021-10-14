//正确的写法还需判断三角形两边之和大于第三边,否则返回"不构成三角型",但鉴于部分高校到这里虽然教了逻辑运算,但if...else没交,遂略过.
#include <stdio.h>
#include <math.h>
int main()
{
	double a, b, c, s, area; 
	scanf_s("%lf%lf%lf", &a, &b, &c);
	s = (a + b + c) / 2;
	area = sqrt(s * (s - a) * (s - b) * (s - c));
	printf_s("%lf", area);
}
