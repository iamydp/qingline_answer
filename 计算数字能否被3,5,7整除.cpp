//这里是直接可以复制到qingline测试的代码,原题中有些逗号是全角有些是半角,挺无语的
#include <stdio.h>
#include <math.h>
int main()
{
	int a;
	scanf("%d", &a);
	if (a % 3 == 0 && a % 5 == 0 && a % 7 == 0){
		printf("%d能同时被3，5，7整除",a);
	}
	else if(a % 3 == 0 && a % 5 == 0){
		printf("%d能同时被3,5整除", a);
	}
	else if (a % 3 == 0 && a % 7 == 0) {
		printf("%d能同时被3,7整除", a);
	}
	else if (a % 5 == 0 && a % 7 == 0) {
		printf("%d能同时被5，7整除", a);
	}
	else if (a % 3 == 0) {
		printf("%d能被3整除", a);
		
	}
	else if (a % 5 == 0) {
		printf("%d能被5整除", a);
	
	}
	else if (a % 7 == 0) {
		printf("%d能被7整除", a);

	}
	else{
		printf("%d不能被3，5，7整除",a);
	}
}
//有没有按行计工资的公司?我去上班
