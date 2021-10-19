#include <stdio.h>
int main()
{	
	float weight,bottle;
	float death;
	int bottles;
	scanf_s("%f", &weight);
	death = weight / 7;
	bottle = death / (0.35*0.001);
	bottles = bottle;
	printf_s("喝%d罐汽水可杀死你！", bottles);
}
