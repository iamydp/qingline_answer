#include <stdio.h>

int main() {
	int b = 0, c = 0;
	while (200 + 10 * b + c < 300) {
		if (2 * b * c == 42 && 2 + b + c == 12) {
			printf("2%d%d\n", b, c);
			goto skip;
		}
		else
		skip:
		{
			if (c == 10) {
				c = 0;
				b++;
			}
			else c++;
		}
	}
}
