#include <stdio.h>

int main() {
	int a, b, m = 0;
	scanf("%d", &a);

	for (int i = 0; i < a; i++){
		scanf("%d", &b);
		 
		if (b > m)
			m = b;
	}
	printf("%d", m);
}
