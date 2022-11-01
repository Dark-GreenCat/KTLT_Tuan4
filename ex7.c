#include <stdio.h>

int main() {
	double R1, R2;
	scanf("%lf%lf", &R1, &R2);
	printf("%lf", R1 * (R2 / (R1 + R2)));

	return 0;
}
