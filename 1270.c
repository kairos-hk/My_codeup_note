#include <stdio.h>

int main()
{
    int a, b, c = 0;

    scanf("%d", &b);

    for (a = 1; a <= b; a++) {
        if (a % 10 == 1)
            c = c + 1;
    }
    printf("%d", c);
}
