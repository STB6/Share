#include <stdio.h>

int main(void)
{
    int a[12], i;
    double av = 0;
    int n = 12;
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (i = 0; i < n; i++)
    {
        printf("%d", a[i]);
        if ((i + 1) % 3 == 0)
            printf("\n");
        else
            printf(" ");
    }
    for (i = 0; i < n; i++)
        av += a[i];
    av = av / (double)n;
    printf("av=%lf\n", av);
    return 0;
}
