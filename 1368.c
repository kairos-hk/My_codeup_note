#include <stdio.h>

int main()
{
    int a, b, i, j;
    char d;

    scanf("%d %d %c", &a, &b, &d);

    if (d == 'L')
    {
        for (i = 1; i <= a; i++){
            for (j = 1; j <= b + i - 1; j++){
                if (j <= i - 1)
                    printf(" ");
                else
                    printf("*");
            }
            printf("\n");
        }
    }
    else{
        for (i = a; i >= 1; i--){
            for (j = 1; j <= b + i - 1; j++){
                if (j <= i - 1)
                    printf(" ");
                else
                    printf("*");
            }
            printf("\n");
        }
    }
}
