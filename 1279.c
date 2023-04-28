#include <stdio.h>


int main() {
    int a, b, n = 0;

    scanf("%d %d", &a, &b);
    for (a; a <= b; a++) {
        
        if (a % 2 == 0)
            n = n - a;
        if (a % 2 == 1)
            n = n + a;
            
    }
    printf("%d", n);
}
