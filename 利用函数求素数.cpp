#include <stdio.h>
int m, i = 2;
int req(int m)
{
	while (i <= m - 1) {
		if (m % i == 0)
			break;
		else i++;
	}
	if (i >= m - 1) {
		printf("素数");
		return 1;
	}
	else {
		printf("质数");
		return 0;
	}
}

int main() {
	scanf_s("%d", &m);
	req(m);
}
