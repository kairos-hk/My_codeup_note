#include <stdio.h>

int main()
{
    int n, d[15][2], es = 100, gs = 100;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &d[i][0], &d[i][1]);

        if (d[i][0] > d[i][1])
            gs -= d[i][0];
        
        else if (d[i][0] < d[i][1])
            es -= d[i][1];
    }

    printf("%d\n%d", es, gs);
}
