#include <stdio.h>

int main()
{
	float q, m, f, i;   //f=final,i=inital
	scanf("%f%f%f",&m,&i,&f);
	q = m * (f - i) * 4184;
	printf("%.2f焦耳", q);    //.2表示输出保留两位小数
}
