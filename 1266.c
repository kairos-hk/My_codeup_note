#include <stdio.h>

int main() {
    int a, b, c = 0,i;
    scanf("%d", &a);

    for (i=0; i < a; i++) {
        scanf("%d", &b);
        c = c + b;
    }

    printf("%d", c);
}
