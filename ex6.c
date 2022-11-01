#include <stdio.h>

int main() {
	int x, y, z;
	for(x = 0; x <= 2; x++)
		for(y = 0; y <= 5; y++)
			for(z = 0; z <= 10; z++)
				if(5*x + 2*y + z == 10)
					printf("%2d %2d %2d\n", x, y, z);

	return 0;
}
