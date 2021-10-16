//最主要的是输入的格式为'r=利率',只要把有效的利率提出来,字符丢掉就行了
#include <stdio.h>
int main() 
{
    float r1 = 0.0, r2 = 0.0, r3 = 0.0, p1, p2, p3;
    scanf("r1 = %f\n", & r1);
    scanf("r2 = %f\n", & r2);
    scanf("r3 = %f", & r3);
    p1 = 1000 * (1 + r1);
    p2 = 1000 * (1 + r2);
    p3 = (1000 * (1 + r3 / 2)) * (1 + r3 / 2);
    printf("p1=%f\n", p1);
    printf("p2=%f\n", p2);
    printf("p3=%f\n", p3);
}
