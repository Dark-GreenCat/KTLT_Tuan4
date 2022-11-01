#include <math.h>
#include <stdio.h>

int main() {
	double a, b, c;
	scanf("%lf%lf%lf", &a, &b, &c);

	double delta = b*b - 4*a*c;
	double root_delta = sqrt(fabs(delta));

	if (delta < 0)
		printf("%lf - %lfi\n%lf + %lfi", -b / (2*a), root_delta / (2*a), -b / (2*a), root_delta / (2*a));
	else if (delta == 0)
		printf("\n%lf", -b / (2*a));
	else
		printf("\n%lf\n%lf", (-b - root_delta)/(2*a), (-b + root_delta)/(2*a));

	return 0;
}
