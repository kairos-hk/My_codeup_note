#include <stdio.h>
char n[20];
int main() {
	scanf("%s", &n);
	if (n[7] == '1' || n[7] == '2')
		printf("19%c%c/%c%c/%c%c %c", n[0], n[1], n[2], n[3], n[4], n[5], n[7] == '1' ? 'M' : 'F');
	else
		printf("20%c%c/%c%c/%c%c %c", n[0], n[1], n[2], n[3], n[4], n[5], n[7] == '3' ? 'M' : 'F');
}
