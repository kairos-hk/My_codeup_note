#include <stdio.h>

int main() {
    int a, sum;
    scanf("%d", &a);
    sum = 0;
    for (int i = 0; i <= a; i++) {
        if (i % 2 == 0)
            sum = sum + i;
    }
    printf("%d", sum);
}
