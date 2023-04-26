#include <stdio.h>

int main() {
    int a, s = 1,i;
    scanf("%d", &a);
    
    for (i = a; i >= 1; i--)
        s *= i;
    
    printf("%d", s);
}
