#include <stdio.h>

int main() {
	double n,
		   sum = 0;
	int count = 0;

	char flag = 'Y';
	do {
		scanf("%lf", &n);
		count++;
		sum += n;

		do {
		
			while(getchar() != '\n');
			printf("Do you want to enter more number? (Y/N): ");
			scanf("%c", &flag);
		}while (flag != 'Y' && flag != 'N');
	}while (flag == 'Y');

	printf("%lf", sum / count);

	return 0;
}
