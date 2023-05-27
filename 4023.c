#include <stdio.h>

void f(int n){
    if(n > 1) f(n/2);
    printf("%d", n%2);
}

int main(){
    int n;
    scanf("%d", &n);
    printf("2 ");
    f(n);
    printf("\n");
    printf("8 %o\n", n);
    printf("16 %X\n", n);
}
