#include <stdio.h>

int main() {
    int d,c[5],cn = 0;
    scanf("%d", &d);
    
    for (int i = 0; i < 5; i++)
        scanf("%d", &c[i]);

    for (int i = 0; i < 5; i++)
        if (d == c[i])
            cn++;

    printf("%d", cn);
}
