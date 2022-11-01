#include <stdio.h>

void Method_1(double score) {
	if (score >= 8.0)
		printf("Gioi");
	else if(score >= 6.5) 
		printf("Kha");
	else if(score >= 5.0)
		printf("Trung binh");
	else
		printf("Yeu");
}

void Method_2(double score) {
	(score >= 8.0) ? printf("Gioi") :
		(score >= 6.5) ? printf("Kha") :
			(score >= 5.0) ? printf("Trung binh") :
				printf("Yeu");
}

int main() {
	double score;
	scanf("%lf", &score);
	
	Method_1(score);
	Method_2(score);

	return 0;
}
