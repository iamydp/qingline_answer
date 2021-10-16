#include <stdio.h>

int main()
{
	float q, m, f, i;   //f=final,i=inital
	scanf("%f%f%f",&m,&i,&f);
	q = m * (f - i) * 4184;
	printf("%.2f焦耳", q);    //.2表示输出保留两位小数
}

//以上是我的答案,qingline官方答案如下,批注为"注意int型和double型数据之间的运算规则"
//#include "stdio.h"
//int main()
//{
//	int m,t1,t2;
//	double q;
//	scanf("%d %d %d",&m,&t1,&t2); 
//	q=4184.0*m*(t2-t1);
//	printf("%.2f焦耳\n",q);
//}
