#include <stdio.h>
int main()
{
    int a, i=0 , s=0;
    scanf("%d",&a);
    
    while(s < a){
        i++;
        s += i;
    }
    
    printf("%d",i);
}
